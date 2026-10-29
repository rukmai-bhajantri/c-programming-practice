#include<stdio.h>
void main(){
    int num,i,fact=1;
    printf("Enter value of number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Eror! only possitive number are allowed 😑\n");
    }
    else{
        for(i=1;i<=num;i++){
            fact*=i;
        }
        printf("Factoreal numbers are:%d",fact);
    }
}