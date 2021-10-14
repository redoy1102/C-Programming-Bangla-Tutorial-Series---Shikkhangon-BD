#include<stdio.h>
void main()
{
    int arr[100], range, i;
    printf("Enter the range of your array: ");
    scanf("%d",&range);

    printf("Enter your array: ");
    for(i = 0; i< range; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < range; i++)
    {
        if(arr[i] > 0)
        {
            printf("%d is positive number.\n",arr[i]);
        }
        else if(arr[i] < 0)
        {
            printf("%d is negative number.\n",arr[i]);
        }
        else{
            printf("%d is zero.",arr[i]);
        }
    }

}