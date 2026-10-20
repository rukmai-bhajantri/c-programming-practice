#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("Enter value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        printf("IT is a prime number=%d",n);
    }
    else{
        printf("IT is not a prime number=%d",n);
    }
}