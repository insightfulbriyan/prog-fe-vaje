#include <stdio.h>
#define COLS 4

int toeplitz(int m[][COLS], int rows); // Prototip funkcije, ki jo morate napisati.

int main()
{
	int rows;



    int m1[][COLS] = 
    {{0, 1, 2, 3},
     {4, 0, 1, 2},
     {5, 4, 0, 1},
     {3, 5, 4, 0},
     {9, 3, 5, 4}};
    rows = 5;
    printf("%d", toeplitz(m1, rows));
    
        /*
    
    1
    
        */
    
    int m2[][COLS] = 
    {{0, 1, 2, 3},
     {4, 0, 1, 3},
     {5, 4, 0, 1}};
    rows = 3;
    printf("%d", toeplitz(m2, rows));
    
        /*
    
    0
    
        */
        return 0;
}

int toeplitz(int m[][COLS], int rows){
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            if (m[i][j] != m[i + 1][j + 1]) {
                return 0;
            }
        }
    }
    return 1;
}