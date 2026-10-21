#include<stdio.h>
void main(){
    char str[100];
    int i,lenght=0;
    printf("Enter a string:\n");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        lenght++;
    }
    printf("The string lenght is=%d",lenght);
}