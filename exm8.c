#include<stdio.h>
void main(){
    int a,b,choice;
    printf("Enter value of a,b:\n");
    scanf("%d %d",&a,&b);

    printf("1.Addition\n2.Subtraction\n3.Multiple\n4.Division\nEnter Your choice:\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Addition=%d",a+b);
        break;

        case 2:
        printf("Subtraction=%d",a-b);
        break;

        case 3:
        printf("Multiple=%d",a*b);
        break;

        case 4:
        printf("Division=%d",a/b);
        break;

        default:
        printf("Envalid choice!!");
    }
}