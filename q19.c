#include <stdio.h>
#include <stdlib.h>
// Write a C Program to search for particular character in an array (If found, end the program)
void main(void)
{
    char var;
    char arr[6] = {'a','b','c','d','e','f'};
    scanf("%c",&var);
    for(int i=0; i<sizeof(arr); i++){
        if(arr[i]==var){
            printf("Element Found\n");
            exit(0); // This is part of header file stdlib.h
        }
    }
    printf("Element not found!");
}

// Remember: You can also do some changes in array by yourself