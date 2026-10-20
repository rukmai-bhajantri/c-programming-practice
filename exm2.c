#include<stdio.h>
void main(){
    int n1,n2,n3;
    printf("Enter value of three number:\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3){
        printf("Biggest number1 is=%d",n1);
    }
    else if(n2>=n1 && n2>=n3){
        printf("Biggest number2 is=%d",n2);
    }
    else{
        printf("Biggest number3 is=%d",n3);
    }
}