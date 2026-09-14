#include <stdio.h>
void main(){
    int a,b,largest;
    printf("Enter Value of a,b:\n ");
    scanf("%d %d",&a,&b);
    largest=(a>b)?a:b;
    printf("Largest number is=%d",largest);
}