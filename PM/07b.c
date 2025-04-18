#include <stdio.h>
#include <string.h>

#define MSG_LEN 25
#define N_MSG 5

int prosto_mesto(char seznam[][MSG_LEN], int d); //prototip funkcije
void novo_sporocilo(char seznam[][MSG_LEN], int d, char s[]); // prototip funkcije

int prosto_mesto(char seznam[][MSG_LEN], int d){
    int i = 0;

    for(; seznam[i][0] != '\0' && i < d; i++){}

    return i==d ? -1 : i;
}

void novo_sporocilo(char seznam[][MSG_LEN], int d, char s[]){
    int i = prosto_mesto(seznam, d);

    strcpy(seznam[i], s);
    strcpy(seznam[(i+1)%d], "");
}

int main(void) {


    char sporocila1[N_MSG][MSG_LEN] = {"msg1", "", "msg3", "", ""};
    novo_sporocilo(sporocila1, N_MSG, "OK");
    printf("%s\n", sporocila1[1]);
    
        /*
    
    OK
    
        */
    
    char sporocila2[N_MSG][MSG_LEN] = {"bbb", "ccc", "ddd", "", "aaa"};
    novo_sporocilo(sporocila2, N_MSG, "eee");
    printf("%s---%s---\n", sporocila2[3], sporocila2[4]);
    
        /*
    
    eee------
    
        */
    
    char sporocila3[N_MSG][MSG_LEN] = {"bbb", "ccc", "ddd", "eee", ""};
    novo_sporocilo(sporocila3, N_MSG, "novo");
    printf("--%s--%s--%s\n", sporocila3[0], sporocila3[4], sporocila3[1]);
    
        /*
    
    ----novo--ccc
    
        */
        return 0;
}