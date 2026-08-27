#include<stdio.h>
void main(){
    int num;
    printf("Enter value of number:\n");
    scanf("%d",&num);

    if(num>=0){
        printf("It is number:=%d");
    }
    else{
        printf("It is not a digit!!");
    }
}