#include <stdio.h>

int main(void)
{
    float a = 0.1234567890123456789012345f;
    double b = 0.1234567890123456789012345f;

    printf("%30.25f\n", a);
    printf("%30.251f\n", b);

}