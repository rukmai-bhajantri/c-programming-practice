#include<stdio.h>
#include <string.h>
void main(){
    int l;
    char str1[25],str2[25];
    printf("Performing String length\n");
    printf("Enter One string name: ");
    scanf("%s",&str1);
    l=strlen(str1);
    printf("The string length is=%d\n",l);
 
    printf("Performing String concating\n");
    printf("Enter tow string: ");
    scanf("%s %s",&str1,&str2);
    printf("The cancating string is= %s\n",strcat(str1,str2));

    printf("\nPerforming String copy\n");
    printf("Enter tow string: ");
    scanf("%s %s",&str1,&str2);
    printf("The first string is=%s and second string is=%s\n",str1,str2);
    strcpy(str1,str2);
    printf("The first string is=%s and second string is=%s",str1,str2);
    
}