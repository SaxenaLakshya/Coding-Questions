#include <stdio.h>
// Write a C Program to take n +ve integers from user and return the greatest among them

void main(void)
{
    int n, num, great=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(great<num) great = num;
    }
    printf("%d is the Greatest Integer entered\n",great);
}