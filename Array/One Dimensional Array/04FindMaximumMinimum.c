#include<stdio.h>
void main()
{
    int arr[100], max, min, range, i;
    printf("Enter a range: ");
    scanf("%d",&range);
    //getting input
    printf("Enter your array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for(i = 1; i < range; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum number: %d",max);
    printf("\nMinimum number: %d",min);

}