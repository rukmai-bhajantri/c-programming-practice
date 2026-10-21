#include<stdio.h>
void main(){
    int n,i,marks[100],average=0,sum=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter number of %d student marks: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    average=sum/n;
    printf("Average of marks=%d",average);
}