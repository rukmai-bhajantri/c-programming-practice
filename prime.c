#include<stdio.h>
int isprime(int num)
{
    int i;
    if(num<=1)
        return 0;
        for(i=2;i*i<=num;i++){
            if(num%i==0)
                return 0;
        }
        return 1;
}

void main(){
    int num;
    printf("Enter value of number: ");
    scanf("%d",&num);
    if(isprime(num)){
        printf("It is prime number:%d\n",num);
    }
    else{
        printf("It is not a prime number:%d",num);
    }
}