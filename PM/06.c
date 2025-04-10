#include <stdio.h>
#include <string.h>

int maks_frekvenca(char tekst[], char izjeme[], char *znak); // prototip funkcije

int maks_frekvenca(char tekst[], char izjeme[], char *znak){
	int znaki[128] = {0};

	for(int i = 0; tekst[i] != 0; i++){
		znaki[tekst[i]] += 1;
	}

	int max_cnt = 0;
	int first = -1;
	for(int i = 0; i < 128; i++){
		char needle[] = {(char)i, '\0' };
		//							  haystack, needle - absolutno amazing ime
		if(znaki[i] > max_cnt && strstr(izjeme, needle) == NULL){
			max_cnt = znaki[i];
			*znak = (char) i;
			first = strstr(tekst, needle) - tekst;
		} else if(znaki[i] == max_cnt && strstr(izjeme, needle) == NULL && strstr(tekst, needle) - tekst < first){
			*znak = (char) i;
			first = strstr(tekst, needle) - tekst;
		}
	}

	return max_cnt;
}

int main(void) {
	char z1;
	int n1 = maks_frekvenca("Lisica pleza po drevesu.", " e", &z1);
	printf("%d %c\n", n1, z1);
	printf("2 i\n\n");
	
	char z2;
	int n2 = maks_frekvenca("12222333444455554", "42", &z2);
	printf("%d %c\n", n2, z2);
	printf("4 5\n\n");
	
	char z3;
	int n3 = maks_frekvenca("Dost huda vaja.", "o .", &z3);
	printf("%d %c\n", n3, z3);
	printf("3 a\n\n");
	
	char z4;
	int n4 = maks_frekvenca("ABCDEFGHIJKLMN", "", &z4);
	printf("%d %c\n", n4, z4);
	printf("1 A\n");

	return 0;
}