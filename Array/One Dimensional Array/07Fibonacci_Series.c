#include<stdio.h>
void main()
{
    int arr[100], range, i;
    printf("Enter your fibonacci range: ");
    scanf("%d",&range);

    arr[0] = 0;
    arr[1] = 1;
    
    for(i = 2; i <= range; i++)
    {
        arr[i] = arr[i-i] + arr[i-2];
    }
    printf("Fibonacci series: ");
    for(i = 0; i <= range; i++)
    {
        printf("%d ",arr[i]);
    }
}