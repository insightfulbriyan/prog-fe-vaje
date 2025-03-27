#include <stdio.h>

int push(void *buff[], int d, void *el); // prototip funkcije

int push(void *buff[], int d, void *el) {
    int i = 0;
    for (i = 0; i<d && buff[i] != NULL; i++);
    for (; i < d-1; i++) {
        buff[i] = el;
        return 0;
    }
    return -1;
}

int main(void) {
	int tab1[] = {1, 2, 3, 4, 5};
	char tab2[] = "abcdef";
	int odg = 0;

	void *bf1[3] = {NULL};
	push(bf1, sizeof(bf1) / sizeof(bf1[0]), &tab1[0]);
	push(bf1, sizeof(bf1) / sizeof(bf1[0]), &tab1[1]);
	odg = push(bf1, sizeof(bf1) / sizeof(bf1[0]), &tab1[2]);
	printf("%d %d\n", odg, *(int *)bf1[1]);
    printf("-1 2\n");

	void *bf2[4] = {NULL};
	push(bf2, sizeof(bf2) / sizeof(bf2[0]), &tab1[2]);
	push(bf2, sizeof(bf2) / sizeof(bf2[0]), &tab1[1]);
	odg = push(bf2, sizeof(bf2) / sizeof(bf2[0]), &tab1[0]);
	printf("%d %d %d\n", odg, *(int *)bf2[0], *(int *)bf2[2]);
    printf("0 3 1\n");

	void *bf3[5] = {NULL};
	for (int i = 0; tab2[i]; i++) {
		odg = push(bf3, sizeof(bf3) / sizeof(bf3[0]), &tab2[i]);
	}
	printf("%d %c\n", odg, *(char *)bf3[3]);
    printf("-1 d\n");

	return 0;
}