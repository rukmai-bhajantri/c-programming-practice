#include<stdio.h>
void main(){
    int rows,cols,i,j;
    int matrix1[10][10],matrix2[10][10],sum[10][10],diff[10][10];
    printf("Enter element of rows and column: ");
    scanf("%d %d",&rows,&cols);
    
    printf("Enter first matrix element: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter secound element matrix: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("Matrix is: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
            diff[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    printf("sum of matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    printf("Sub of matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
}