#include<stdio.h>
void main(){
    float r,ci,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area=3.14159*r*r;
    ci=2*3.14159*r;
    printf("Area of circle:%.2f\n",area);
    printf("Circumference of the circle:%.2f\n",ci);
}