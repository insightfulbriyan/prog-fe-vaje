#include <stdio.h>

unsigned char rgba_izlusci_kanal(unsigned long barva, char kanal); // prototip funkcije

unsigned char rgba_izlusci_kanal(unsigned long barva, char kanal) {
	switch (kanal) {
	case 'r':
		// printf("r\n%02X\n", barva >> 8);
		barva >>= 8;
		// printf("%08X\n", barva);
	case 'g':
		// printf("g\n%02X\n", barva >> 8);
		barva >>= 8;
		// printf("%08X\n", barva);
	case 'b':
		// printf("b\n%02X\n", barva >> 8);
		barva >>= 8;
		// printf("%08X\n", barva);
	default:
		break;
	}

	// printf("last\n%02X\n", (unsigned char) (barva));
	// printf("%08X\n", barva);
	return barva;
}

int main(void) {

	printf("%02X\n", rgba_izlusci_kanal(0x34AA01FF, 'a'));

	/*

FF

	*/

	printf("%02X\n", rgba_izlusci_kanal(0x34AA01FF, 'b'));

	/*

01

	*/

	printf("%02X\n", rgba_izlusci_kanal(0x43FF64CC, 'r'));

	/*

43

	*/
	return 0;
}