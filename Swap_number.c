#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("Before Reverse:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    printf("After Reverse:\n");
    a=a+c;
    c=a-c;
    a=a-c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
}