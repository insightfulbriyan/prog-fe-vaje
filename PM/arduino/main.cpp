#include <Arduino.h>
#include <LiquidCrystal.h>

// LED
#define PIN_LED_D1	  8
#define PIN_LED_D2	  9
#define PIN_LED_D3	  10
#define PIN_LED_D4	  11

// LCD
#define PIN_LCD_D7	  44
#define PIN_LCD_D6	  46
#define PIN_LCD_D5	  48
#define PIN_LCD_D4	  50
#define PIN_LCD_E	  47
#define PIN_LCD_RW	  49 //(ne pozabite ga postaviti na LOW v setup)
#define PIN_LCD_RS	  51

// TIPKE
#define PIN_BTN_T1	  4
#define PIN_BTN_T2	  5
#define PIN_BTN_T3	  6
#define PIN_BTN_T4	  7

// ROTACIJSKI DAJALNIK
#define PIN_ROT_CLK	  22
#define PIN_ROT_DT	  24
#define PIN_ROT_SW	  26
#define PIN_ROT_VPLUS 28 // nastavi na HIGH
#define PIN_ROT_GND	  30 //  nastavi na LOW

LiquidCrystal lcd(PIN_LCD_RS, PIN_LCD_E, PIN_LCD_D4, PIN_LCD_D5, PIN_LCD_D6, PIN_LCD_D7);

const char abeceda[] = "abcdefghijklmnoprstuvz!,?-.";
const int abeceda_len = sizeof(abeceda) - 1;

int indeks = 0;
int lastClkStanje;
bool zadnjeStanjeTipka;

void setup() {
	Serial.begin(9600);
	lastClkStanje = digitalRead(PIN_ROT_CLK);

	pinMode(PIN_LCD_RW, OUTPUT);
	digitalWrite(PIN_LCD_RW, LOW);
	pinMode(PIN_ROT_VPLUS, OUTPUT);
	digitalWrite(PIN_ROT_VPLUS, HIGH);
	pinMode(PIN_ROT_GND, OUTPUT);
	digitalWrite(PIN_ROT_GND, LOW);
	pinMode(PIN_ROT_CLK, INPUT);
	pinMode(PIN_ROT_DT, INPUT);
	pinMode(PIN_ROT_SW, INPUT_PULLUP);

	lcd.begin(16, 2);
	lcd.setCursor(0, 0);
	lcd.print("Gyros GyroPita");
	lcd.setCursor(1, 0);
	lcd.print("Dobra");
	lcd.setCursor(15, 1);
	lcd.write(abeceda[indeks]);
}

void loop() {
	int clkStanje = digialRead(PIN_ROT_CLK);
	if (clkStanje != lastClkStanje) {
		int dtStanje = digitalRead(PIN_ROT_DT);
		if (dtStanje != clkStanje) {
			indeks = (indeks + 1) % abeceda_len;
		} else {
			indeks = (indeks - 1 + abeceda_len) % abeceda_len;
		}
		lcd.setCursor(15, 1);
		lcd.write(abeceda[indeks]);
		Serial.print("Znak: ");
		Serial.print(abeceda[indeks]);
	}
	lastClkStanje = clkStanje;

	bool trenutnoStanjeTipke = digitalRead(PIN_ROT_SW);
	if (trenutnoStanjeTipke == LOW && zadnjeStanjeTipka == HIGH) {
		Serial.print("Tipka pritisnjena");
		lcd.setCursor(0, 1);
		lcd.print("Potrjeno");
		delay(300);
		lcd.setCursor(0, 1);
		lcd.print("dobra     ");
		lcd.setCursor(15, 1);
		lcd.write(abeceda[indeks]);
	}
	zadnjeStanjeTipka = trenutnoStanjeTipke;
	delay(10);
}