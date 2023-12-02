#include <stdio.h>
// Write a function to print the factorial of the entered number by the user
void main(void)
{
    int n;
    int fact(int x);
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
int fact(int x){
    int g, f=1;
    for(g=1; g<=x; g++) f = f*g;
    return f;
}

// This code can also be done using the Recursive Approach