#include<stdio.h>
void main(){
    int a,b;
    printf("Enter Your Value of a,b: ");
    scanf("%d %d",&a,&b);

    printf("This value are equal:%d\n",a==b);
    printf("value Not equal:%d\n",a!=b);
    printf("A is bigger number:%d\n",a>b);
    printf("A is smaller than B:%d\n",a<b);
    printf("A is equal or bigger than B:%d\n",a>=b);
    printf("A is smaller than or equal to B:%d\n",a<=b);
}