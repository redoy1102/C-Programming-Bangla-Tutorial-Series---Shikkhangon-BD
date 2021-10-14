#include<stdio.h>
void main()
{
    int n, lastDigit, originalNumber,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    originalNumber = n;
    lastDigit =  n % 10;
    while(n >= 10)
    {
        n /= 10;
    }
    sum = 0;
    sum = n + lastDigit;
    printf("Sum of first Digit (%d) and last digit (%d) = %d",n,lastDigit,sum);
}
