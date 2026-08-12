#include<stdio.h>
void main(){
    int a,b;
    printf("Enter your value of a,b: ");
    scanf("%d %d",&a,&b);

    printf("%d\n",a>b && b>a);
    printf("%d\n",a>b || b>a);
    printf("%d",!(a>b));
}