#include <stdio.h>
void main()
{
    int a;
    a = 10;
    printf("Post-increment value = %d\n", a++);
    printf("Pre-increment value = %d\n", ++a);

    printf("Post-decrement value = %d\n", a--);
    printf("Pre-decrement value = %d\n", --a);
}