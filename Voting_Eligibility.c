// Q3—Write a C program to check whether a person is eligible to vote or not.
#include<stdio.h>
void main(){
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }
}