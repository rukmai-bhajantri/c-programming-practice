#include<stdio.h>
void main(){
    int N,sum=0,i;
    printf("Enter Value of N:\n");
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        printf("%d+",i);
        sum=sum+i;
    }
    printf("=%d",sum);
}