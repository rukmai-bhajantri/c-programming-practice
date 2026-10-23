#include<stdio.h>
void main(){
    int i,j,n,trace=0,a[10][10];
    printf("Enter matrix size: ");
    scanf("%d",&n);

    printf("Enter matrix elements: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<n;i++){
        trace=trace+a[i][i];
    }
    printf("Trace of matrix=%d",trace);
}