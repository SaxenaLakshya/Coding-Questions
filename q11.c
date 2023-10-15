#include <stdio.h>
#include <math.h>
// Write a C Program to print the Armstrong numbers between 100 and 999
void main(void)
{
    for (int i=100; i<=999; i++){
        int num = i;
        int armstrong = 0;
        while(num!=0){
            armstrong = armstrong + pow((num%10),3);
            num = num/10;
        }
        if (armstrong==i){
            printf("%d\n",i);
        }
    }
}
// Remember! We can change the range of the numbers