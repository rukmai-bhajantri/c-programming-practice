#include<stdio.h>
void main(){
    float pi,r;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);

    pi=3.142*r*r;
    printf("Area of circle is=%f",pi);
    getchar();
}