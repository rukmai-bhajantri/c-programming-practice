#include<stdio.h>
void main(){
    int i,n,num[5],evensum=0,oddsum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    printf("array ellement are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);

        if(num[i]%2==0){
            evensum=evensum+num[i];
        }
        else{
            oddsum=oddsum+num[i];
        }
    }
    printf("even sum of number is:%d\n",evensum);
        printf("Odd sum of number is:%d\n",oddsum);
    getchar();
}