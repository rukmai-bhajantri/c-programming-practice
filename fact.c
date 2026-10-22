#include<stdio.h>
void main(){
    int i,n,fact=1;
    printf("Enter value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
        // printf("%d",fact);
    }
    printf("Factorial is %d",fact);
}