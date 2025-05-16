#include <Arduino.h>
#include <LiquidCrystal.h>

// LED (Not used in this version)
#define PIN_LED_D1    8
#define PIN_LED_D2    9
#define PIN_LED_D3    10
#define PIN_LED_D4    11

// LCD
#define PIN_LCD_D7    44
#define PIN_LCD_D6    46
#define PIN_LCD_D5    48
#define PIN_LCD_D4    50
#define PIN_LCD_E     47
#define PIN_LCD_RW    49
#define PIN_LCD_RS    51

// Buttons (not used)
#define PIN_BTN_T1    4
#define PIN_BTN_T2    5
#define PIN_BTN_T3    6
#define PIN_BTN_T4    7

// Rotary Encoder
#define PIN_ROT_CLK   2    // Needs to be interrupt-capable pin
#define PIN_ROT_DT    24
#define PIN_ROT_SW    3    // Interrupt-capable pin
#define PIN_ROT_VPLUS 28
#define PIN_ROT_GND   30

LiquidCrystal lcd(PIN_LCD_RS, PIN_LCD_E, PIN_LCD_D4, PIN_LCD_D5, PIN_LCD_D6, PIN_LCD_D7);

const char abeceda[] = "abcdefghijklmnoprstuvz!,?-."; 
const int abeceda_len = sizeof(abeceda) - 1;

volatile int indeks = 0;
volatile bool encoderMoved = false;
volatile bool swPressed = false;

void updateEncoder() {
  int clkState = digitalRead(PIN_ROT_CLK);
  int dtState = digitalRead(PIN_ROT_DT);

  if (dtState != clkState) {
    indeks = (indeks + 1) % abeceda_len;
  } else {
    indeks = (indeks - 1 + abeceda_len) % abeceda_len;
  }

  encoderMoved = true;
}

void handleButtonPress() {
  static unsigned long lastPress = 0;
  if (millis() - lastPress > 200) {  // basic debounce
    swPressed = true;
    lastPress = millis();
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(PIN_LCD_RW, OUTPUT);
  digitalWrite(PIN_LCD_RW, LOW);

  pinMode(PIN_ROT_VPLUS, OUTPUT);
  digitalWrite(PIN_ROT_VPLUS, HIGH);
  pinMode(PIN_ROT_GND, OUTPUT);
  digitalWrite(PIN_ROT_GND, LOW);

  pinMode(PIN_ROT_CLK, INPUT);
  pinMode(PIN_ROT_DT, INPUT);
  pinMode(PIN_ROT_SW, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(PIN_ROT_CLK), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_ROT_SW), handleButtonPress, FALLING);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Gyros GyroPita");
  lcd.setCursor(0, 1);
  lcd.print("dobra         ");
  lcd.setCursor(15, 1);
  lcd.write(abeceda[indeks]);
}

void loop() {
  if (encoderMoved) {
    encoderMoved = false;
    lcd.setCursor(15, 1);
    lcd.write(abeceda[indeks]);
    Serial.print("Znak: ");
    Serial.println(abeceda[indeks]);
  }

  if (swPressed) {
    swPressed = false;
    Serial.println("Tipka pritisnjena");
    lcd.setCursor(0, 1);
    lcd.print("Potrjeno      ");
    delay(300);
    lcd.setCursor(0, 1);
    lcd.print("dobra         ");
    lcd.setCursor(15, 1);
    lcd.write(abeceda[indeks]);
  }

  delay(10); // minimal delay to prevent flickering
}
