#include<stdio.h>
#include<ctype.h>
void main(){
    char str[100];
    int i,vowels=0,consonants=0,digit=0,spaces=0,specialchar=0;
    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            if(tolower(str[i])=='a'|| tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }

        else if(isdigit(str[i])){
            digit++;
        }
        else if(isspace(str[i])){
            spaces++;
        }
        else{
            specialchar++;
        }
    }

    printf("Vowels:%d\n",vowels);
    printf("Consonante:%d\n",consonants);
    printf("Digit:%d\n",digit);
    printf("Space:%d\n",spaces);
    printf("SpecealChar:%d",specialchar);
}