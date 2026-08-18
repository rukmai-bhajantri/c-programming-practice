// Q1—Write a C program to check whether a number is positive or negative.

#include<stdio.h>
void main(){
    int a;
    printf("Enter value of number: \n");
    scanf("%d",&a);

    if(a>0){
        printf("number is positive=%d",a);
    }
    else if(a<0){
        printf("number is negative=%d",a);
    }
    else{
        printf("number is zero=%d",a);
    }
}