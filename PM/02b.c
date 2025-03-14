#include <stdio.h>

void izpisi_cifro(int cifra);
void izpisi_stevilko(int stev);

void izpisi_stevilko(int stev) {
	char *ones[] = {"ena", "dva", "tri", "štiri", "pet", "šest", "sedem", "osem", "devet"};
	char *tenths[] = {"deset", "dvajset", "trideset", "štirideset", "petdeset", "šestdeset", "sedemdeset", "osemdeset", "devetdeset"};
	char *teens[] = {"enajst", "dvanajst", "trinajst", "štirinajst", "petnajst", "šestnajst", "sedemnajst", "osemnajst", "devetnajst"};

	if (stev < 10) {
		printf("%s\n", ones[stev - 1]);
	} else if (stev % 10 == 0) {
        printf("%s\n", tenths[stev / 10 - 1]);
	} else if (stev <= 19) {
		printf("%s\n", teens[stev - 11]);
	} else {
		printf("%sin%s\n", ones[stev % 10 - 1], tenths[stev / 10 - 1]);
	}
}

int main() {
    for(int i = 1; i < 100; i++){
        izpisi_stevilko(i);
    }
	return 0;
}