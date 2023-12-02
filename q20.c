#include <stdio.h>
// Write a C Program to multiply 2 matrices
void main(void)
{
    int a[10][10],b[10][10],x[10][10];
    int r,c;
    scanf("%d %d",&r,&c);
    printf("Enter the elements of 1st matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) scanf("%d",&b[i][j]);
    }
    printf("The Product of 2 matrices is..\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            x[i][j] = 0;
            for(int k=0; k<c; k++) x[i][j] += a[i][k] * b[k][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) printf("%d\t",x[i][j]);
        printf("\n");
    }
}