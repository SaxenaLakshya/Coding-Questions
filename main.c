#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// Write a program to print the largest of 2 numbers (Question 1)
// void main(void)
// {
//     int num1, num2;
//     scanf("%d %d", &num1, &num2);
//     if (num1 > num2){
//         printf("%d is greater", num1);
//     }
//     else if (num2 > num1){
//         printf("%d is greater", num2);
//     }
//     else {
//         printf("Both are equal");
//     }
// }

// Write a program to check if the person is able to vote or not (Question 2)
// void main(void)
// {
//     int age;
//     scanf("%d", &age);
//     if (age >= 18){
//         printf("You are eligible to vote....");
//     }
//     else {
//         printf("You are not eligible to vote....");
//     }
// }

// Ask the user to enter the marks of Physics, Chemistry and Maths on the basis of the following declare the result (Question 3)
// void main(void)
// {
//     float p, c, m;
//     scanf("%f %f %f", &p, &c, &m);
//     float percentage = ((p+c+m)/300) * 100;
//     if (percentage > 90){
//         printf("First Division");
//     }
//     else if ((percentage > 70) && (percentage <= 90)){
//         printf("Second Division");
//     }
//     else if ((percentage > 50) && (percentage <= 70)){
//         printf("Third Division");
//     }
//     else {
//         printf("Failed");
//     }
// }

// Print the numbers from 1 - 10 (Question 4)
// void main(void)
// {
//     int i = 1;
//     while (i <= 10){
//         printf("%d\n", i);
//         i++;
//     }
// }

//Print the even numbers from the number entered by the user. The program should end when the user enters 0 (Question 5)
// void main(void)
// {
//     int num;
//     while (1){
//         scanf("%d", &num);
//         if (num == 0){
//             break;
//         }
//         if (num%2 == 0){
//             printf("%d is an even number\n", num);
//         }
//     }
// }

// Write a program to print the smallest and the largest of 2 numbers using ternary operator (Question 6)
// void main(void)
// {
//     int num1, num2;
//     scanf("%d %d", &num1, &num2);
//     (num1 > num2) ? printf("%d is greater", num1) : printf("%d is greater", num2);
// }

// Compute the roots of a Quadratic Equation
// void main(void)
// {
//     float a,b,c,r1,r2,d;
//     scanf (" %f %f %f", &a, &b, &c);
//     d = b*b - 4*a*c;
//     if(d>0){
//         printf("Roots are Distinct and Real\n");
//         r1 = -b+sqrt (d) / (2*a);
//         r2 = -b-sqrt (d) / (2*a);
//         printf("%f %f", r1, r2);
//     }
//     else if(d==0) printf("The Equation has only one Real Root\n");
//     else if(d<0) printf("Roots are Imaginary");
// }

// Write a C Program to mutiply and divide a number by 2 using LeftShift and RightShift
// void main (void)
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d multiplied by 2 is %d\n", num, (num<<1));
//     printf("%d divided by 2 is %d\n", num, num>>1);
// }

// To find the GCF of 2 numbers (Question 9)
// void main(void)
// {
//     int i, j, g;
//     scanf("%d %d", &i, &j);
//     g = (i<j) ? i : j;
//     while (g>0)
//     {
//         if ((i%g == 0) && (j%g == 0)){
//             break;
//         }
//         g--;
//     }
//     printf("GCF of %d and %d is %d\n", i, j, g);
// }

// To print prime numbers between 1 to 100, to check whether number is prime or composite (Question 10)
// void main(void)
// {
//     int num, loop, f = 0, t;
//     scanf("%d", &num);
//     t = num;
//     while (t>0){
//         if (num%t == 0){
//             f++;
//         }
//         t--;
//     }
//     if (f == 2){
//         printf("%d is Prime Number\n", num);
//     }
//     else{
//         printf("%d is Composite\n", num);
//     }
// }

// Ask the user to enter a number (+ve integer only) print the sum of the digit (Question 11)
// void main(void)
// {
//     int sum, num, n;
//     sum = 0;
//     scanf("%d", &num);
//     while (num != 0){
//         n = num%10;
//         sum = sum + n;
//         num = num/10;
//     }
//     printf("%d is the sum", sum);
// }

// Write a code which checks if the year is a leap year or not (Question 12)
// void main(void)
// {
//     int y;
//     scanf("%d", &y);
//     if (((y%4 == 0) && (y%100 != 0)) || ((y%100 == 0) && (y%400 == 0)))
//     {
//         printf("%d is a leap year", y);
//     }
//     else {
//         printf("%d is not a leap year");
//     }
// }

// Write a C Program to reverse an integer entered by the user (Question 13)
// void main(void)
// {
//     int num;
//     int rev = 0;
//     scanf("%d", &num);
//     while (1){
//         rev = rev + num%10;
//         num = num/10;
//         if (num == 0){
//             break;
//         }
//         rev = rev * 10;
//     }
//     printf("%d", rev);
// }

// Write a C Program to print the 1st 10 numbers of Fibinacci Series (Question 14)
// void main(void)
// {
//     int num1, num2, num;
//     num1 = 0;
//     num2 = 1;
//     for (int i=1; i <= 10; i++){
//         printf("%d ", num1);
//         num = num2;
//         num2 = num1 + num2;
//         num1 = num;
//     }
// }

// Write a C Program to print the Largest and the Smallest integer in the system (Question 15)
//void main(void)
// {
//     int i = 1;
//     while (i>0){
//         i++;
//     }
//     printf("%d\n", i);
//     i--;
//     printf("%d\n", i);
// }

// Write a C programs to print different * patterns (Question 16)
// void main(void)
// {
//     int num;
//     scanf("%d", &num);
//     for (int i=1; i<=num; i++){
//         for (int j=1; j<=num; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// void main(void)
// {
//     int num,i,j;
//     scanf("%d", &num);
//     for (i=1; i<=num; i++){
//         for (j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// void main(void)
// {
//     int rows;
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < 2 * (rows - i) - 2; j++) {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Write a C Program to print the Armstrong numbers between 100 and 999 (Question 17)
// void main(void)
// {
//     for (int i=100; i<=999; i++){
//         int num = i;
//         int armstrong = 0;
//         while(num!=0){
//             armstrong = armstrong + pow((num%10),3);
//             num = num/10;
//         }
//         if (armstrong==i){
//             printf("%d\n",i);
//         }
//     }
// }

// Write a C Program to print the Ceiling and Floor value of a float value (Question 18)
// void main(void)
// {
//     float num;
//     scanf("%f", &num);
//     printf("Ceiling value is %d\n", (int)(num+1));
//     printf("Floor value of is %d\n", (int)num);
// }

// Write a C Program to count the number of vowels in the entered string (Question 19)
// void main(void)
// {
//     int a=0,e=0,i=0,o=0,u=0;
//     char str[20];
//     scanf("%[^\n]s",str);
//     int j=0;
//     while(str[j] != '\x0'){
//         if ((str[j]=='a')||(str[j]=='A')){
//             a++;
//         }
//         else if ((str[j]=='e')||(str[j]=='E')){
//             e++;
//         }
//         else if ((str[j]=='i')||(str[j]=='I')){
//             i++;
//         }
//         else if ((str[j]=='o')||(str[j]=='O')){
//             o++;
//         }
//         else if ((str[j]=='u')||(str[j]=='U')){
//             u++;
//         }
//         j++;
//     }
//     printf("a -> %d\n",a);
//     printf("e -> %d\n",e);
//     printf("i -> %d\n",i);
//     printf("o -> %d\n",o);
//     printf("u -> %d\n",u);
// }

// Write a C Program which reverse the string entered by the user (Question 20)
// void main(void)
// {
//     char str[20], temp;
//     scanf("%s",str);
//     int i=0, len=0;
//     while (str[len]!='\0'){
//         len++;
//     }
//     for (i=0; i<(len-1)/2; i++){
//         temp = str[i];
//         str[i] = str[len-1-i];
//         str[len-1-i] = temp;
//     }
//     printf("%s",str);
// }

// Write a C Program to enter 10 number print sum and average of 10 numbers by using arrays (Question 21)
// void main(void)
// {
//     int arr[10], sum=0;
//     float avg;
//     for (int i=0; i<10; i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0; i<10; i++){
//         sum = sum + arr[i];
//     }
//     avg = (float)sum/10;
//     printf("Sum is %d and Average is %f", sum,avg);
// }

// Write a C Program to take n +ve integers from user and return the greatest among them
// void main(void)
// {
//     int n, num, great=0;
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&num);
//         if(great<num) great = num;
//     }
//     printf("%d is the Greatest Integer entered\n",great);
// }

// Write a C Program to take elements as input from user and print it in Matrix Form
// void main(void)
// {
//     int a[10][10];
//     int r, c;
//     printf("Enter number of Rows and Column...\n");
//     scanf("%d %d",&r,&c);
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("Enter the a[%d][%d]\n",i+1,j+1);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The entered Matrix is...\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// Write a C Program to search for element in an array
// void main(void)
// {
//     char var;
//     char arr[6] = {'a','b','c','d','e','f'};
//     scanf("%c",&var);
//     for(int i=0; i<sizeof(arr); i++){
//         if(arr[i]==var){
//             printf("Element Found\n");
//             exit(0);
//         }
//     }
//     printf("Element not found!");
// }

// Write a C Program to multiply 2 matrices
// void main(void)
// {
//     int a[10][10],b[10][10],x[10][10];
//     int r,c;
//     scanf("%d %d",&r,&c);
//     printf("Enter the elements of 1st matrix\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++)scanf("%d",&a[i][j]);
//     }
//     printf("Enter the elements of 2nd matrix\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++) scanf("%d",&b[i][j]);
//     }
//     printf("The Product of 2 matrices is..\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             x[i][j] = 0;
//             for(int k=0; k<c; k++) x[i][j] += a[i][k] * b[k][j];
//         }
//     }
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++) printf("%d\t",x[i][j]);
//         printf("\n");
//     }
// }

// Write a function to print the factorial of the entered number by the user
// void main(void)
// {
//     int n;
//     int fact(int x);
//     scanf("%d",&n);
//     printf("Factorial of %d is %d",n,fact(n));
// }
// int fact(int x){
//     int g, f=1;
//     for(g=1; g<=x; g++) f = f*g;
//     return f;
// }

// Write a function to swap 2 variables
// void main(void)
// {
//     int a,b;
//     void swap(int a, int b);
//     scanf("%d %d",&a,&b);
//     printf("a is %d and b is %d\n",a,b);
//     swap(a,b);
// }
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a is %d and b is %d",a,b);
// }

// Write a function to swap 2 variables using pointers
// void main(void)
// {
//     void swap(int *a, int *b);
//     int a=3;
//     int b=6;
//     swap(&a,&b);
//     printf("Swapped values are %d and %d\n",a,b);
// }
// void swap(int *a, int *b){
//     int t;
//     t = (*a);
//     (*a) = (*b);
//     (*b) = t;
// }

// Write a C program to concatenate 2 string without using strcat()
// void main(void)
// {
//     char a[10], b[10], c[20];
//     gets(a);
//     gets(b);
//     int i, j;
//     for(i=0; a[i]!='\x0'; i++) c[i] = a[i];
//     for(j=0; b[j]!='\x0'; j++) c[i+j] = b[j];
//     c[i+j] = '\x0';
//     puts(c);
// }

// Write a C Program to enter the string from the user and print the occurrence of each character.
// void main(void)
// {
//     char ch = 'a';
//     char str[100];
//     int freq=0;
//     gets(str);
//     for(ch >= 'a'; ch <= 'z'; ch++){
//         for(int i=0; i<strlen(str); i++){
//             if(str[i]==ch) freq++;
//         }
//         if(freq!=0) printf("%c occurs %d times\n",ch, freq);
//         freq = 0;
//     }
// }

// Write a program in C to find the square of any number using a function.
// void main(void)
// {
//     int num;
//     void sqr(int);
//     scanf("%d",&num);
//     sqr(num);
// }
// void sqr(int num){
//     printf("The square is %d",num*num);
// }

// Write a program in C to check if a given number is even or odd.
// void check(int num)
// {
//     if(num%2==0) printf("Entered number is Even\n");
//     else printf("Entered number is Odd\n");
// }

// void main(void)
// {
//     int num;
//     scanf("%d",&num);
//     check(num);
// }

void main(void)
{
    int min;
    scanf("%d",&min);
    int hours, minutes;
    hours = min/60;
    minutes = min - (hours*60);
    printf("%d Hours and %d Minutes");
}