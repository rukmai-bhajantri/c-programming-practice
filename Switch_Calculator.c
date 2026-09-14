#include<stdio.h>
void main(){
    int num1,num2,choice;
    printf("Enter Two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    printf("----Menu----\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\nEnter your choice>>>\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Addition:=%d",num1+num2);
        break;

        case 2:
        printf("Subtraction:=%d",num1-num2);
        break;

        case 3:
        printf("Multiplication:=%d",num1*num2);
        break;
    }
}