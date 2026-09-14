#include<stdio.h>
void main(){
    int i,n;
    printf("Enter value od N:\n");
    scanf("%d",&n);
    i=5;
    if(i%n==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }
}