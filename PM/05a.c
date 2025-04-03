#include <stdio.h>

int preveri_oklepaje(char tekst[]); // prototip funkcije

int preveri_oklepaje(char tekst[]) {
    int oklepaji = 0;

    for(int i = 0; tekst[i] != '\0' && oklepaji >= 0; i++) {
        if(tekst[i] == '(') {
            oklepaji++;
        } else if(tekst[i] == ')') {
            oklepaji--;
        }
    }

    if(oklepaji == 0){
        return 0;
    }
    return -1;

}


int main(void) {
	char t1[] = "(x + y) * z)";
	printf("%d\n", preveri_oklepaje(t1));
	/* -1 */

	char t2[] = "a + b * (1 / (2 – x)) * z";
	printf("%d\n", preveri_oklepaje(t2));
	/* 0 */

	char t3[] = "a + b) * (1 / (2 – x)) * (z";
	printf("%d\n", preveri_oklepaje(t3));
	/* -1 */
	return 0;
}