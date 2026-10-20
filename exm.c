#include<stdio.h>
#define PI 3.14159
void main(){
    float area,circumference,radius;
    printf("Enter the value of radius\n");
    scanf("%f",&radius);

    area=PI*radius*radius;
    circumference=2*PI*radius;

    printf("Area of circle is=%.2f\n",area);
    printf("Circumference of the circle is=%.2f\n",circumference);
}