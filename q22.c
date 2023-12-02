#include <stdio.h>
// Write a function to swap 2 variables
void main(void)
{
    int a,b;
    void swap(int a, int b);
    scanf("%d %d",&a,&b);
    printf("a is %d and b is %d\n",a,b);
    swap(a,b);
}
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a is %d and b is %d",a,b);
}