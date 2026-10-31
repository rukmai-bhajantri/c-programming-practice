#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter value of number(press 999 to stop: )");
    while(1){
        scanf("%d",&num);
        if(num==999){
            break;
        }
        else if(num>0){
            sum=sum+num;
        }
        else{
            printf("Erro! Only possitive numbers are allowed(press only possitive number plz):\n");
        }
    }
    printf("Possitive sum=%d",sum);
}