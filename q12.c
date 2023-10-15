#include <stdio.h>
#include <math.h>
// Write a C Program to print the Ceiling and Floor value of a float value
void main(void)
{
    float num;
    scanf("%f", &num);
    printf("Ceiling value is %d\n", (int)(num+1));
    printf("Floor value of is %d\n", (int)num);
}