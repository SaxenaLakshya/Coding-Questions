#include <stdio.h>
#include <math.h>
// Write a C Program to print the 1st 10 numbers of Fibinacci Series
void main(void)
{
    int num1, num2, num;
    num1 = 0;
    num2 = 1;
    for (int i=1; i <= 10; i++){
        printf("%d ", num1);
        num = num2;
        num2 = num1 + num2;
        num1 = num;
    }
}