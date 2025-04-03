#include <stdio.h>

int preveri_oklepaje_razs(char tekst[]); // prototip funkcije

int preveri_oklepaje_razs(char tekst[]) {
	char oklepaji[15];
	int index = 0;

	for (int i = 0; tekst[i] != '\0'; i++) {
		switch (tekst[i]) {
		case '(':
		case '[':
		case '{':
			oklepaji[index] = tekst[i];
			index++;
			break;
        case')':
			index--;
			if (oklepaji[index] == '(') {
				oklepaji[index] = '\0';
			} else {
				return -1;
			}
			break;
		case ']':
			index--;
			if (oklepaji[index] == '[') {
				oklepaji[index] = '\0';
			} else {
				return -1;
			}
			break;
		case '}':
			index--;
			if (oklepaji[index] == '{') {
				oklepaji[index] = '\0';
			} else {
				return -1;
			}
			break;
		default:
			break;
		}
	}

	return (oklepaji[0] == '\0') - 1;
}

int main(void) {
	char t1[] = "abc({[...}] p[9] + *p) ? (w)";
	printf("%d\n", preveri_oklepaje_razs(t1));
	/* -1 */

	char t2[] = "abc(def{gh}i)jkl)";
	printf("%d\n", preveri_oklepaje_razs(t2));
	/* -1 */

	char t3[] = "printf(\"%d\", p[9]); {}";
	printf("%d\n", preveri_oklepaje_razs(t3));
	/* 0 */

	return 0;
}