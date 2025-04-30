#include <stdio.h>

int produkt(int, int);   // Prototip funkcije. 

int main(){
    int x, y; 



    x = 2, y = 3;
    printf("%d", produkt(x, y));
    
        /*
    
    6
    
        */
    
    x = -6, y = 0;
    printf("%d", produkt(x, y));
    
        /*
    
    0
    
        */
        return 0;
}

int produkt(int a, int b){	
	return a*b;
}