#include<stdio.h>

int input(int x[], int range)
{
    int i, max;
    printf("Enter your array elements: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&x[i]);
    }
    max = x[0];
    for(i = 1; i < range; i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}

void main()
{
    int arr[100], range;
    printf("Enter the range of your array: ");
    scanf("%d",&range);

    //calling input function
    int maxValue = input(arr, range);

    printf("Maximum value: %d",maxValue);
}