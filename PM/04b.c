#include <stdio.h>

void *pop(void *buff[]); // prototip funkcije

void *pop(void *buff[]) {
    int i = 0;
    for (i = 0; buff[i] != NULL; i++);
    if (i == 0) {return NULL;}
    void *el = buff[i-1];
    buff[i-1] = NULL;
    return el;
}


int main(void) {
	float tab1[] = {1.9, 2.1, 1.8, 4.1, 3.8};
	int tab2[] = {8, 7, 12, 9};

	void *bf1[3] = {&tab1[0], &tab1[1], NULL};
	printf("%.1f ", *(float *)pop(bf1));
	printf("%.1f\n", *(float *)pop(bf1));
	printf("2.1 1.9\n");

	void *bf2[10] = {&tab2[0], &tab2[1], &tab2[2], NULL};
	void *k = NULL;
	while ((k = pop(bf2)) != NULL) {
		printf("%d ", *(int *)k);
	}
	printf("\n");
	printf("12 7 8\n");

	return 0;
}