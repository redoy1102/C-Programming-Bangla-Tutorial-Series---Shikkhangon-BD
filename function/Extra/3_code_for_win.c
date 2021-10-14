#include<stdio.h>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}

void main()
{
    int n1, n2, maximum, minimum;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    maximum = max(n1,n2);
    minimum = min(n1,n2);

    printf("Maximum = %d",maximum);
    printf("\nMinimum = %d",minimum);

}