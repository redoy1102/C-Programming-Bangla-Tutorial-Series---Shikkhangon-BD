#include<stdio.h>
void main()
{
    int array[100], i, range;
    printf("Enter a range for array: ");
    scanf("%d",&range);
    printf("Enter your array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Negative number: ");
    for(i = 0; i < range; i++)
    {
        if(array[i] < 0)
        {
            printf("%d ",array[i]);
        }
    }
}