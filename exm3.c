#include<stdio.h>
#include<math.h>
void main(){
     double num;
    printf("Enter value of num:\n");
    scanf("%lf",&num);

    printf("Sqare root=%.2f\n",sqrt(num));
    printf("Exponential=%.2f\n",exp(num));
    printf("logarithm=%.2f\n",log(num));
    printf("Power(num^3)=%.2f\n",pow(num,3));
}