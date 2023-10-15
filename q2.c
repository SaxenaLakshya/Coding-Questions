#include <stdio.h>
#include <math.h>
//Write a C Program to print the even numbers from the number entered by the user. The program should end when the user enters 0
void main(void)
{
    int num;
    while (1){
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        if (num%2 == 0){
            printf("%d is an even number\n", num);
        }
    }
}