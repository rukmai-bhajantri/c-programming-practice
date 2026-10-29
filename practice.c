#include<stdio.h>
void main(){
    int percentage;
    printf("Enter student percentage: ");
    scanf("%d",&percentage);

    switch(percentage/10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        printf("Class:Distinction=%d",percentage);
        break;
        case 6:
        printf("Class:First class=%d",percentage);
        break;
        case 5:
        printf("Class:pass=%d",percentage);
        break;
        case 4:
        printf("Class:second class=%d",percentage);
        break;
        default:
        printf("Class:Fail=%d",percentage);
    }
}