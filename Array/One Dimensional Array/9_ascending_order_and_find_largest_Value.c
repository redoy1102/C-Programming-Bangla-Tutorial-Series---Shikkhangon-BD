#include<stdio.h>
void main()
{
    int arr[100], i, j, range, temp, max;
    printf("Enter the range of your array: ");
    scanf("%d",&range);
    //getting input
    printf("Enter your range: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printing main array
    printf("Main array: ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",arr[i]);
    }
    //making logic for finding largest value
    max = arr[0];
    for(i = 1; i < range; i++)
    {
        if(arr[i] < max)
        {
            max = arr[i];
        }
    }
    //making main logic of ascending order
    for(i = 0; i < range; i++)
    {
        for(j = i + 1; j < range; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //printing output
    printf("\n\tAscending ordered: ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\tLargest value: %d",max);
}