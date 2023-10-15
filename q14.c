#include <stdio.h>
#include <math.h>
// Write a C Program which reverse the string entered by the user
void main(void)
{
    char str[20], temp;
    scanf("%s",str);
    int i=0, len=0;
    while (str[len]!='\0'){
        len++;
    }
    for (i=0; i<(len-1)/2; i++){
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    printf("%s",str);
}
// Remember! We can also use a function called strrev() from "string.h" to reverse a string