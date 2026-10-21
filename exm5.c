#include<stdio.h>
void main(){
    int n,num=2,factors,i,count=0;
    printf("Enter value of number:\n");
    scanf("%d",&n);

    while(count<n){
        factors=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                factors++;
            }
        }
        if(factors==2){
            printf(" %d",num);
            count++;
        }
        num++;
    }
}