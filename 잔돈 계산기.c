#define _CRT_SECURE_NO_WARNNING
#include <stdio.h>


int main(void){

    int change = 700;
    int c500, c100,c50,c10;

    c500= change/500;
    c100 = (change %500) / 100;
    c50 = (((change % 500) % 100) / 50);
    c10 = ((((change % 500) % 100) / 50) % 10);

    printf("500원짜리 %d개, 100원짜리 %d개 50원짜리 %d, 10원짜리 %d \n", c500, c100 );

}
