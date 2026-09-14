#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter value of num1 and num2: \n");
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        printf("First number is beggest number:%d\n",num1);
    }
    else if(num2>num1){
        printf("Second number is beggest number is:%d",num2);
    }
    else{
        printf("Invalid enter");
    }
}