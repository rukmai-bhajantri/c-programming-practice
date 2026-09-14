#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of numbers a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        printf("A is smallest number:%d",a);
    }
    else if(b<a && b<c){
        printf("b is smallest number:%d",b);
    }
    else if(c<a && c<b){
        printf("c is smallest number:%d",c);
    }
    else{
        printf("Some numbers are equal");
    }
}