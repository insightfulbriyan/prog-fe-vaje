#include <stdio.h>

void izpisi_cifro(int cifra);

void izpisi_cifro(int stev) {
	char *ones[] = {"ena", "dva", "tri", "štiri", "pet", "šest", "sedem", "osem", "devet"};

	printf("%s\n", ones[stev - 1]);
}

int main() {
	for (int i = 1; i < 10; i++) {
		izpisi_cifro(i);
	}
	return 0;
}