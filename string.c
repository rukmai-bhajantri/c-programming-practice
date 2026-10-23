#include<stdio.h>
#include<string.h>
void main(){
    char str1[25],str2[25];
    int l;
    printf("****Performing string length****\n");
    printf("Enter one string name: ");
    scanf("%s",str1);
    l=strlen(str1);
    printf("The string length is=%d\n",l);

    printf("****Performing string concatenation****\n");
    printf("Enter Two string name: ");
    scanf("%s %s",&str1,&str2);
    printf("The string concatenation=%s\n",strcat(str1,str2));

    printf("****Performing string compare****\n");
    printf("Enter Two string name: ");
    scanf("%s %s",&str1,&str2);
    if(strcmp(str1,str2)==0){
        printf("It is strings are equal\n");
    }
    else{
        printf("It is strings are not equal\n");
    }

    printf("****Performing string copy****\n");
    printf("Enter Two string name: ");
    scanf("%s %s",&str1,&str2);
    printf("The first string=%s and secound string is=%s\n",str1,str2);
    strcpy(str1,str2);
    printf("The first string=%s and secound string is=%s\n",str1,str2);
}