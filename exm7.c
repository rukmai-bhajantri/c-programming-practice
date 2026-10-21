#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter value of number(press 999 to stop):\n");
    while(1){
        scanf("%d",&num);
        if(num==999){
            break;
        }
        else if(num>0){
            sum+=num;
        }
        else{
            printf("Erro! Only possitive number are summed");
        }
    }
    printf("Posssitive summed=%d",sum);
}