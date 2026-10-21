#include<stdio.h>
void main(){
    int n,num=2,i,count=0,foctors;
    printf("Enter value of number:\n");
    scanf("%d",n);

    while(count<=n){
        foctors=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                foctors++;
            }
        }
        if(foctors==2){
            printf("%d",num);
            count++;
        }
        num++;
    }
}