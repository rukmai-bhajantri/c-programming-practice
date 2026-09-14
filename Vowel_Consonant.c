#include<stdio.h>
void main(){
    char n;
    printf("Enter value of N:\n");
    scanf("%c",&n);

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
        printf("Vowel=%c",n);
    }
    else{
        printf("Consonant=%c",n);
    }
}