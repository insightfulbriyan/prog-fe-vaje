#include <stdio.h>
#include <string.h>

#define MSG_LEN 25
#define N_MSG 5

int prosto_mesto(char seznam[][MSG_LEN], int d); // prototip funkcije

int prosto_mesto(char seznam[][MSG_LEN], int d){
    int i = 0;

    for(; seznam[i][0] != '\0' && i < d; i++){}

    return i==d ? -1 : i;
}

int main(void) {


    char sporocila1[N_MSG][MSG_LEN] = {"msg1", "", "msg3", "", ""};
    printf("%d\n", prosto_mesto(sporocila1, N_MSG));
    
        /*
    
    1
    
        */
    
    char sporocila2[N_MSG][MSG_LEN] = {"ena", "dve", "tri", "stiri", "pet"};
    printf("%d\n", prosto_mesto(sporocila2, N_MSG));
    
        /*
    
    -1
    
        */
    
    char sporocila3[N_MSG][MSG_LEN] = {"ena", "dve", "tri", "stiri", ""};
    printf("%d\n", prosto_mesto(sporocila3, N_MSG));
    
        /*
    
    4
    
        */
        return 0;
}