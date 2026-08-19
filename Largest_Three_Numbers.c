#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of a,b and c: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is beggest number:%d",a);
    }
    else if(b>a && b>c){
        printf("B is beggest number:%d",b);
    }
    else if(c>a && c>b){
        printf("C is beggest number:%d",c);
    }
    else{
        printf("Some numbers are equal");
    }
}