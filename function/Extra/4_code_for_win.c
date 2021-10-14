#include<stdio.h>

void evOd(int x)
{
    if(x % 2 == 0)
    {
        printf("%d is even number.",x);
    }
    else{
        printf("%d is not even number.",x);
    }
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    evOd(n);
}