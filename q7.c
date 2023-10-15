#include <stdio.h>
#include <math.h>
// Write a C Program which checks if the year is a leap year or not
void main(void)
{
    int y;
    scanf("%d", &y);
    if (((y%4 == 0) && (y%100 != 0)) || ((y%100 == 0) && (y%400 == 0)))
    {
        printf("%d is a leap year", y);
    }
    else {
        printf("%d is not a leap year");
    }
}