#include <stdio.h>

unsigned long rgba_zapakiraj(unsigned char r, unsigned char g, unsigned char b, unsigned char a); // prototip funkcije

unsigned long rgba_zapakiraj(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	return (r << 24) + (g << 16) + (b << 8) + a;
}

int main(void) {
	printf("%08X\n", rgba_zapakiraj(0x43, 0xFF, 0x64, 0xD9));
	printf("%08X\n", rgba_zapakiraj(0x12, 0x34, 0x56, 0xAB));

	return 0;
}