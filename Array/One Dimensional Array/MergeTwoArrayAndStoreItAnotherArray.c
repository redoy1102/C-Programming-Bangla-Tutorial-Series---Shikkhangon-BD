#include<stdio.h>
void main()
{
    int arr1[100], arr2[100], merge[100],arrRange, i;

    //asking range for array
    printf("Enter range for array1 array2 : ");
    scanf("%d",&arrRange);
    
    //getting input for both array
    //array = 1
    printf("\nEnter the first array: ");
    for(i = 0; i < arrRange; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //array = 2
    printf("\nEnter the second array: ");
    for(i = 0; i < arrRange; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("Elements of array after merge: ");
    for(i = 0; i < arrRange; i++) //5
    {
        merge[i] = arr1[i];//2
        merge[i + arrRange] = arr2[i]; 
    }

    for(i = 0; i< (arrRange * 2); i++)
    {
        printf("%d ",merge[i]);
    }

    
}
