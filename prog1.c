#include<stdio.h>
void main(){
    int length=0,n[100],i;
    printf("Enter a string name: ");
    scanf("%d",&n);

    for(i=0;n[i]!='\0';i++){
        length++;
    }
    printf("Length is=%d",length);
}