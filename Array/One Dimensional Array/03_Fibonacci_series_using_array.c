#include<stdio.h>
void main()
{
    int i, n, a[30];
    printf("Enter a number: ");
    scanf("%d",&n);

    //making main logic
    a[0] = 0;
    a[1] = 1;

    for(i = 2; i <= n; i++)
    {
        a[i] = a[i-2] + a[i-1];
    }

    //printing output
    for(i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }
}
