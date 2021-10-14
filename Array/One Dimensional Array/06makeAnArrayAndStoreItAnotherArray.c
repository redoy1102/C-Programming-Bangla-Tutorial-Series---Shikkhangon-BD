#include<stdio.h>
void main()
{
    int arr1[100], arr2[100], i, range;
    printf("Enter the range of first array: ");
    scanf("%d",&range);

    printf("Enter the values of first array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Array1 : ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("n");

    for(i = 0; i < range; i++)
    {
        arr2[i] = arr1[i];
    }
    
    printf("Array2: ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",arr2[i]);
    }
}