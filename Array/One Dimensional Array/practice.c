#include<stdio.h>
void main()
{
    int arr[100], positive[100], negative[100],  i, range;
    printf("Enter the range of your array: ");
    scanf("%d",&range);
    //getting input
    printf("Enter your array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < range; i++)
    {
        if(arr[i] > 0)
        {
            positive[i] = arr[i];
        }
       else if(arr[i] < 0){
            negative[i] = arr[i];
        }
    }
    printf("Positive number: ");
    for(i = 0; i < range; i++)
    {
        printf("%d ",positive[i]);
    }
    
    
}