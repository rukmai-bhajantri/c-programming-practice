#include<stdio.h>
void main(){
    int row,col,i,j,m1[10][10],m2[10][10],sum[10][10],diff[10][10];
    printf("Enter number of row and col element of matrix:\n ");
    scanf("%d %d",&row,&col);

    printf("Enter first element of matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter second element of matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    printf("matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sum[i][j]=m1[i][j]+m2[i][j];
            diff[i][j]=m1[i][j]-m2[i][j];
        }
    }

    printf("sum of matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    printf("Sub of matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
}