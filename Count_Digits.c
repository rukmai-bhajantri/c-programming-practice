#include<stdio.h>
void main(){
    int number,count=0;
    printf("Number of digits\n");
    scanf("%d",&number);

    while(number>0){
        count++;
        number=number/10;
    }
    printf("Number of digits = %d",count);
}