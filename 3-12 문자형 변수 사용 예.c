#include <stdio.h>

int main(void)
{
    char a,b, c;

    a = 'A';

    printf("%c \n", a);
    printf("%d\n", a);


    b = 'a';
    c = b +5;
    printf("%c \n", b);
    printf("%c \n", c );// b보다 5칸 뒤에 있는 문자를 출력한다

    c = 90;
    printf("%c\n", c);

}