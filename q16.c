#include <stdio.h>
#include <math.h>
// Write a C Program to print the graph of the e raise to the x
void main(void)
{
    float v, l, r;
    int i;
    for(i=0; l<4; l=l+0.4){
        r = exp(l);
        for(i=0; i<r; i++) printf(" ");
        printf("*\n");
    }
}