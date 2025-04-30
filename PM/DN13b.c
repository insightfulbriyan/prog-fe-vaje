#include <stdio.h>

int sestej(int *, unsigned int);   // Prototip funkcije. 

int main(){
    int x[]={1,2,0,-4,5,6,4,3,9}; 


    printf("%d", sestej(x, 9));

	/*

26

	*/

printf("%d", sestej(x, 4));

	/*

-1

	*/
    return 0;
}

int sestej(int * x, unsigned int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += x[i];
    }

    return sum;
}