#include <stdio.h>
// To print prime numbers between 1 to 100, to check whether number is prime or composite
void main(void)
{
    int num, loop, f = 0, t;
    scanf("%d", &num);
    t = num;
    while (t>0){
        if (num%t == 0){
            f++;
        }
        t--;
    }
    if (f == 2){
        printf("%d is Prime Number\n", num);
    }
    else{
        printf("%d is Composite\n", num);
    }
}