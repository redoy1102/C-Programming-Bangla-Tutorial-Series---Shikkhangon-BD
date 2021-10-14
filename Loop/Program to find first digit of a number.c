#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number to find first digit: "
    scanf("%d",&n); //120

    while(n >= 10)
    {
        n = n /10;
    }
    printf("First digit %d",n);
}
