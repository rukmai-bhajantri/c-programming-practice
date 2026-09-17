#include<stdio.h>
void main(){
    int i,n,num[5];
    printf("Enter value of n:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    printf("array ellement are:\n");
    for(i=0;i<n;i++){
         printf("%d ", num[i]);
    }
}