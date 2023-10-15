#include <stdio.h>
#include <math.h>
// Write a C Program to count the number of notes from the entered amount
void main(void)
{
    int amount,note50,note20,note10,note5,note2,note1;
    scanf("%d",&amount);
    note50 = amount/50;
    note20 = (amount-(note50*50))/20;
    note10 = (amount-(note50*50+note20*20))/10;
    note5 = (amount-(note50*50+note20*20+note10*10))/5;
    note2 = (amount-(note50*50+note20*20+note10*10+note5*5))/2;
    note1 = (amount-(note50*50+note20*20+note10*10+note5*5+note2*2));
    printf("50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d",note50,note20,note10,note5,note2,note1);
}