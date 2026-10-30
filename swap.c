#include<stdio.h>
void main(){
    int a,b;
    printf("Enter value of numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swaping number:a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping number:a=%d,b=%d",a,b);
}