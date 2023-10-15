#include <stdio.h>
#include <math.h>
// Compute the roots of a Quadratic Equation
void main(void)
{
    float a,b,c,r1,r2,d;
    scanf (" %f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d>0){
        printf("Roots are Distinct and Real\n");
        r1 = -b+sqrt (d) / (2*a);
        r2 = -b-sqrt (d) / (2*a);
        printf("%f %f", r1, r2);
    }
    else if(d==0) printf("The Equation has only one Real Root\n");
    else if(d<0) printf("Roots are Imaginary");
}