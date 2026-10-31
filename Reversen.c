#include<stdio.h>
#include<string.h>
void main(){
    char str[20],revstr[20];
    printf("Enter a string: ");
    gets(str);
    strcpy(revstr,str);
    strrev(revstr);
    printf("Original string:%s\n",str);
    printf("Reverse string:%s\n",revstr);
    strcat(str,revstr);
    printf("String Concating:%s\n",str);
    printf("length of original string=%d\n",strlen(str)-strlen(revstr));
    printf("Length of concating string=%d",strlen(str));
}