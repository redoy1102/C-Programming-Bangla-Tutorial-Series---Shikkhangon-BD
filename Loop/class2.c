#include<stdio.h>
void main()
{
    int n, reverseNumber, rem,OriginalNumber;
    printf("Enter a number to get reverse number: ");
    scanf("%d", &n);
    reverseNumber = 0;
    OriginalNumber=0;
    OriginalNumber=n;
    while(n != 0)
    {
        rem = n%10;
        reverseNumber = reverseNumber*10 + rem;
        n = n / 10;
    }
    printf("Reversed Number of %d is = %d",OriginalNumber,reverseNumber);
}
