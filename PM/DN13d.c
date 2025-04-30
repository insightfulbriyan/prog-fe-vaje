#include <math.h>
#include <stdio.h>

typedef struct {
	float realno;
	float imaginarno;
} kompleksno;

kompleksno primerjaj(kompleksno cif1, kompleksno cif2);

int main() {
	kompleksno cifra1, cifra2, rezultat;

	cifra1.realno = 9;
	cifra1.imaginarno = 16;
	cifra2.realno = 1;
	cifra2.imaginarno = 1;
	rezultat = primerjaj(cifra1, cifra2);
	printf("Večje je %.1f%+.1fi", rezultat.realno, rezultat.imaginarno);

	/*

Večje je 9.0+16.0i

	*/

	cifra1.realno = 3;
	cifra1.imaginarno = 4;
	cifra2.realno = 5;
	cifra2.imaginarno = 1;
	rezultat = primerjaj(cifra1, cifra2);
	printf("Večje je %.1f%+.1fi", rezultat.realno, rezultat.imaginarno);

	/*

Večje je 5.0+1.0i

	*/

	return 0;
}

kompleksno primerjaj(kompleksno cif1, kompleksno cif2){
    if(sqrt(pow(cif1.realno, 2) + pow(cif1.imaginarno, 2)) > sqrt(pow(cif2.realno, 2) + pow(cif2.imaginarno, 2))){
        return cif1;
    }
    return cif2;
}