#include<stdio.h>
void main()
{
    int arr1[100], arr2[100], merge[100], i, range;
    printf("Enter the range for two arrays: ");
    scanf("%d",&range);

    //getting input
    printf("\nEnter %d numbers for first array: ",range);
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter another %d numbers for second array: ",range);
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //making merge array
    printf("\nMerged array: ");
    for(i = 0; i < range; i++)
    {
        merge[i] = arr1[i];
        merge[i+range] = arr2[i];
        
    }
    //printing output
    for (i = 0; i < (range * 2); i++)
    {
        printf("%d ",merge[i]);
    }
}