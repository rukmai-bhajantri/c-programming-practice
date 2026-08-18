// Q2—Write a C program to check whether a given number is Even or Odd.

#include<stdio.h>
void main(){
    int num;
    printf("Enter value of number: \n");
    scanf("%d",&num);

    if(num%2==0){
        printf("This number is Even number=%d",num);
    }
    else{
        printf("This number is Odd number=%d",num);
    }
}