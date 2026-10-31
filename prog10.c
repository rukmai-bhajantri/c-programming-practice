#include<stdio.h>
void main(){
    int marks[100],num,i,sum=0,ave;
    printf("Enter number of student: ");
    scanf("%d",&num);
    printf("Enter number %d student marks: ",num);

    for(i=0;i<num;i++){
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    ave=sum/num;
    printf("Average of marks %d",ave);
}