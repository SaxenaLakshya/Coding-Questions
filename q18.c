#include <stdio.h>
// Write a C Program to take elements as input from user and print it in Matrix Form
void main(void)
{
    int a[10][10], b[10][10], ans[10][10];
    int r, c;
    printf("Enter number of Rows and Column...\n");
    scanf("%d %d",&r,&c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the a[%d][%d]\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered Matrix is...\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}