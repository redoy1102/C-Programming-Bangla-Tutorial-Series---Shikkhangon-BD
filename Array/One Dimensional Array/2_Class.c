#include <stdio.h>
void main()
{
    int arr[100], range, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d",&range);

    printf("Enter elements of array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < range; i++)
    {
        for(j = i+1; j < range; j++)
        {
            if(arr[i] > arr[j])
            {
                temp   = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i < range; i++)
    {
        printf("%d ", arr[i]);
    }
}