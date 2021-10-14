#include<stdio.h>
int cube(int x)
{
    return (x*x*x);
}

void main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    result = cube(n);
    printf("Cube of %d = %d",n,result);
}