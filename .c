#include <stdio.h>

int main(void)
{

    //부호 있는.업ㅎㅅ는 정수형
    //부호있는 short : -32768 ~ 32767

    //short a = 13579; //부호있는 정수(-,+)
    //signed short c = 53197;//부호 있는 정수(-,+)
    //unsigned short b = 53197;//부호 없는 정수형(+)
    short d = 32769, e = -32769;

    //printf("부호있는 정수  a : %d\n", a);
    //printf("부호있는 정수  a : %d\n", b);
    //printf("부호있는 정수  a : %d\n", c);
    printf("오버플로우 +2 32769 : %d\n", d);
    printf("언더플로우 -1 -32769 : %d\n", e);

   return 0;
}