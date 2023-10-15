#include <stdio.h>
#include <math.h>
// Write a C program to check if the person is able to vote or not
void main(void)
{
    int age;
    scanf("%d", &age);
    if (age >= 18){
        printf("You are eligible to vote....");
    }
    else {
        printf("You are not eligible to vote....");
    }
}