#include<stdio.h>

int prime(int x)
{
    int i;
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int arm(int x)
{
    int temp, r, sum = 0;
    temp = x;
    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    return sum;
}

int per(int x)
{
    int sum = 0, i;
    for(i = 1; i <= x/2; i++)
    {
        if(x % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
void main()
{
    int n, res;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    if(n == 1)
    {
        printf("1 is neither prime nor composite.");
    }

    if(prime(n) == 0)
    {
        printf("%d is prime number.",n);
    }
    else{
        printf("%d is not prime number.",n);
    }

    if(arm(n) == n)
    {
        printf("\n%d is Armstrong number.",n);
    }
    else{
        printf("\n%d is not Armstrong number.",n);
    }

    if(per(n) == n)
    {
        printf("\n%d is Perfect number.",n);
    }
    else{
        printf("\n%d is not Perfect number.",n);
    }
}