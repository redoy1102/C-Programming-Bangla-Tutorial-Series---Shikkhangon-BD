#include<stdio.h>
void main()
{
    int arr[100], i, range;
    printf("Enter the range of your array: ");
    scanf("%d",&range);

    //taking input
    printf("Enter %d numbers: ",range);
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //printing output
    printf("Array = ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",arr[i]);
    }
}