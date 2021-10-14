#include<stdio.h>

int squ(int x)
{
    return x * x;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nSquare of %d is %d",num, squ(num));
}