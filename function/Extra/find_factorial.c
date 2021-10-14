#include<stdio.h>

int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
void main()
{
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);

    int result = fact(n);
    printf("Factorial of %d  = %d",n,result);
}