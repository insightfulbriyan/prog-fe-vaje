#include <stdio.h>

int nadomestna_upornost(int r1, int r2, char vezava);

int nadomestna_upornost(int r1, int r2, char vezava) {
	if (vezava == 'z') {
		return r1 + r2;
	} else {
        // float r1r = 1.0/r1;
        // float r2r = 1.0/r2;
        // float R = 1.0/(r1r + r2r);
        // int upornost = (int)R;
		return (int)(1.0/(1.0/r1 + 1.0/r2));
	}
}

int main(void) {
	int r;

	r = nadomestna_upornost(10, 220, 'z');
	printf("%d\n", r);
	// 230

	r = nadomestna_upornost(20, 80, 'v');
	printf("%d\n", r);
	// 16

	r = nadomestna_upornost(nadomestna_upornost(15, 25, 'z'), 360, 'v');
	printf("%d\n", r);
	// 36

	r = nadomestna_upornost(0, 220, 'v');
	printf("%d\n", r);
	// 0

	r = nadomestna_upornost(0, 0, 'v');
	printf("%d\n", r);
	// 0

	return 0;
}