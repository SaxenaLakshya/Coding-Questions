#include <stdio.h>
// Write a C Program to mutiply and divide a number by 2 using LeftShift and RightShift
void main (void)
{
    int num;
    scanf("%d", &num);
    printf("%d multiplied by 2 is %d\n", num, (num<<1));
    printf("%d divided by 2 is %d\n", num, num>>1);
}