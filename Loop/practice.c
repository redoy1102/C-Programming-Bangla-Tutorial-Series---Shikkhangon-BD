#include <stdio.h>
void main()
{
    int n, originalNumber, lastDigit, sum;
    printf("Enter a number to check first and last digit of a number: ");
    scanf("%d",&n);
    originalNumber = n;
    lastDigit = n % 10;
    while(n >= 10)
    {
        n/=10;
    }
    printf("First digit of %d is %d",originalNumber, n);
    printf("\nFirst digit of %d is %d",originalNumber, lastDigit);
}
