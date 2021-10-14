#include<stdio.h>
void main()
{
    int arr[100], range, pos, num, i;
    //getting range
    printf("Enter the range of array: ");
    scanf("%d",&range);
    //getting array
    printf("Enter your array: ");
    for ( i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    //getting element
    printf("Enter element to insert: ");
    scanf("%d",&num);
    //getting position
    printf("Enter the position of element: ");
    scanf("%d",&pos);

    if(pos > range+1 || pos <= 0)
    {
        printf("Invalid position!Position must be 1 to %d",range);
    }
    else{
        for(i = range; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos-1] = num;
        range++;
        printf("Array elements after insertion: ");
        for(i = 0; i < range; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    

}