//Write a c program to find last digit of a given number.
#include<stdio.h>
void main()
{
   int n, lastDigit;
   printf("Enter a number to check last digit: ");
   scanf("%d",&n);

   lastDigit = n % 10;
   printf("Last digit of %d is : %d",n,lastDigit);

}
