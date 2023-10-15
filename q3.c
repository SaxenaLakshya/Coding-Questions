#include <stdio.h>
#include <math.h>
// Write a C program to print the smallest and the largest of 2 numbers using ternary operator
void main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    (num1 > num2) ? printf("%d is greater", num1) : printf("%d is greater", num2);
}