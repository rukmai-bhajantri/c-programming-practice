#include<stdio.h>
void main(){
    int a,b;
    printf("Enter value of a,b:\n");
    scanf("%d %d",&a,&b);

    printf("Bitwise AND=%d\n",a&b);
    printf("Bitwise OR=%d\n",a|b);
    printf("Bitwise NOT=%d\n",~a);
}