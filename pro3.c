#include<stdio.h>
#include<math.h>
void main(){
    double num;
    printf("Enter the number of value:\n");
    scanf("%lf",&num);

    printf("square root=%.2f\n",sqrt(num));
    printf("Exponential=%.2f\n",exp(num));
    printf("Logarithm=%.2f\n",log(num));
    printf("Power(num^3):%.2f\n",pow(num,3));
}