#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 25
#define N_MSG	5
#define OKNO	10

int prosto_mesto(char seznam[][MSG_LEN], int d);
char *okno(char prikaz[], char seznam[][MSG_LEN], unsigned int d1, unsigned int start, unsigned int d2);

char tekst[OKNO + 1];

char *okno(char prikaz[], char seznam[][MSG_LEN], unsigned int d1, unsigned int start, unsigned int d2) {
	char temp[N_MSG * (MSG_LEN + 1)] = "\0";

	int i = 0;
	for (; seznam[i][0] != '\0'; i++) {
	}

	for (i++; seznam[i % d1][0] != '\0'; i++) {
		strcat(temp, seznam[i % d1]);
		strcat(temp, " ");
	}

	temp[strlen(temp) - 1] = '\0';
	strncpy(prikaz, temp + start, d2);

	return prikaz;
}

int main(void) {
	char sporocila5[N_MSG][MSG_LEN] = {"SOUVLAKI", "GYROS", "", "MOUSSAKA", "TZATZIKI"};
	okno(tekst, sporocila5, N_MSG, 25, OKNO);
	printf("\n%*s", -OKNO, tekst);
	/*I GYROS*/

	char sporocila1[N_MSG][MSG_LEN] = {"BREAD", "SNACKS", "PIZZA", "", "FRESH"};
	okno(tekst, sporocila1, N_MSG, 3, OKNO);
	printf("\n%*s", -OKNO, tekst);
	/*SH BREAD S*/

	char sporocila2[N_MSG][MSG_LEN] = {"msg1", "msg2", "msg3", "msg4", ""};
	okno(tekst, sporocila2, N_MSG, 6, OKNO);
	printf("\n%*s", -OKNO, tekst);
	/*sg2 msg3 m*/

	char sporocila3[N_MSG][MSG_LEN] = {"", "2022", "2023", "2024", "2025"};
	okno(tekst, sporocila3, N_MSG, 0, OKNO);
	printf("\n%*s", -OKNO, tekst);
	/*2022 2023*/

	return 0;
}