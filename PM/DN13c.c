#include <stdio.h>
#define INIT_VECTOR 0x0

void vnmv_bomb_ignit_2(unsigned char *);

int main(){
	unsigned char BOMB_REGISTER = INIT_VECTOR;
	


    BOMB_REGISTER = 0x42;		
    vnmv_bomb_ignit_2(&BOMB_REGISTER);
    if(BOMB_REGISTER%2)printf("Boom.");
    else printf("...");
    
        /*
    
    ...
    
        */
    
    BOMB_REGISTER = 0xC2;
    vnmv_bomb_ignit_2(&BOMB_REGISTER);
    if(BOMB_REGISTER%2)printf("Boom.");
    else printf("...");
    
        /*
    
    ...
    
        */
    
    BOMB_REGISTER = 0xE2;
    vnmv_bomb_ignit_2(&BOMB_REGISTER);
    if(BOMB_REGISTER%2)printf("Boom.");
    else printf("...");
    
        /*
    
    Boom.
    
 */       
	return 0;
}
void vnmv_bomb_ignit_2(unsigned char *bomb_register){
    if((*(unsigned int *) bomb_register & 0b01100010) == 0b01100010) *(unsigned int *) bomb_register |= 0x00000001;
}
