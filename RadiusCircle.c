#include<stdio.h>
#define PI 3.14159
 void main(){
    float r,area,cir;
    // clrscr();
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);
    area=PI*r*r;
    cir=2*PI*r;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", cir); 
    // getch();
}