#include <stdio.h>
// Write a function to swap 2 variables using pointers
void main(void)
{
    void swap(int *a, int *b);
    int a=3;
    int b=6;
    swap(&a,&b);
    printf("Swapped values are %d and %d\n",a,b);
}
void swap(int *a, int *b){
    int t;
    t = (*a);
    (*a) = (*b);
    (*b) = t;
}