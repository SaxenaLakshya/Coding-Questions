#include <stdio.h>
#include <string.h>
// Write a C program to concatenate 2 string without using strcat()
void main(void)
{
    char a[10], b[10], c[20];
    gets(a);
    gets(b);
    int i, j;
    for(i=0; a[i]!='\x0'; i++) c[i] = a[i];
    for(j=0; b[j]!='\x0'; j++) c[i+j] = b[j];
    c[i+j] = '\x0';
    puts(c);
}
