#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter value of N:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d+",i);
        sum=sum+i;
    }
    printf("=%d",sum);
    getchar();
}