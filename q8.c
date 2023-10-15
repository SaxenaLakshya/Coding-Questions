#include <stdio.h>
#include <math.h>
// Write a C Program to reverse an integer entered by the user
void main(void)
{
    int num;
    int rev = 0;
    scanf("%d", &num);
    while (1){
        rev = rev + num%10;
        num = num/10;
        if (num == 0){
            break;
        }
        rev = rev * 10;
    }
    printf("%d", rev);
}