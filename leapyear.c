#include<stdio.h>
void main(){
    int year;
    printf("Enter Year: \n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0){
        printf("This is leap year:=%d",year);
    }
    else{
        printf("This year is not leap year:=%d",year);
    }
}