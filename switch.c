#include<stdio.h>
void main(){
    int percentage;
    printf("Enter the percentage of marks: ");
    scanf("%d",&percentage);

    switch(percentage/10){
        case 10:
        case 9:
        case 8:
        case 7:
        printf("Class:Distication");
        break;
        case 6:
        printf("Class:First class");
    break;
    case 5:
    printf("Class:pass");
    break;
    case 4:
    printf("Class:second class");
    break;
    default:
    printf("Fail");
    }
}