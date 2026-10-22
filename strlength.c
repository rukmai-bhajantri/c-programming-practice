#include<stdio.h>
void main(){
    int i,length=0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=1;str[i]!='\0';i++){
        length++;
    }
    printf("The string length is=%d",length);
}