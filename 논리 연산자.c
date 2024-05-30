#include <stdio.h>
int main(void){
    int a =99;
    printf("AND (a>=100)&&(a<200) : %d\n", AND(a>=100)&&(a<200));
    printf("AND (a>=100)||(a<200) : %d\n", AND(a>=100)||(a<200));
    printf("NOT !(a==100) : %d\n", !(a == 100));
    return 0;
}