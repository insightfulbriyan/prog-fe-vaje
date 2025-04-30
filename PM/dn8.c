#include <stdio.h>

int main() {
	typedef struct {
		int a, b;
	} ms;
	ms x;
	void *k;
	k = &x;

	printf("%d %d", ((ms *)k)->a, ((ms *)k)->b);
	return 0;
}