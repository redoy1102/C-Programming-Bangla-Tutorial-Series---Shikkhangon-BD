#include<stdio.h>
void main()
{
    int arr[100], i, j, range, temp;
    printf("Enter the range of your array: ");
    scanf("%d",&range);
    //getting input
    printf("Enter your array: ");
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
    //first of all making descending order of inputed array to find first largest and 2nd largest value.
    for(i = 0; i < range; i++)
    {
        for(j = i + 1; j < range; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //printing output
    printf("\n2nd largest value is : %d",arr[1]);
}