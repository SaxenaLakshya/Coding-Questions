#include <stdio.h>
#include <math.h>
#include <string.h>
// Write a C Program to count the number of vowels in the entered string
void main(void)
{
    int a=0,e=0,i=0,o=0,u=0;
    char str[20];
    scanf("%[^\n]s",str);
    int j=0;
    while(str[j] != '\x0'){
        if ((str[j]=='a')||(str[j]=='A')){
            a++;
        }
        else if ((str[j]=='e')||(str[j]=='E')){
            e++;
        }
        else if ((str[j]=='i')||(str[j]=='I')){
            i++;
        }
        else if ((str[j]=='o')||(str[j]=='O')){
            o++;
        }
        else if ((str[j]=='u')||(str[j]=='U')){
            u++;
        }
        j++;
    }
    printf("a -> %d\n",a);
    printf("e -> %d\n",e);
    printf("i -> %d\n",i);
    printf("o -> %d\n",o);
    printf("u -> %d\n",u);
}