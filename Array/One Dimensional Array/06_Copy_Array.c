#include<stdio.h>
void main()
{
   int array1[100], array2[100], i, range;
   printf("Enter the range of array1: ");
   scanf("%d",&range);

   printf("Enter the value of array1: ");
   for(i = 0; i < range; i++)
   {
       scanf("%d",&array1[i]);
   }

   for(i = 0; i < range; i++)
   {
       array2[i] = array1[i];
   }

   printf("Value of array2: ");
   for(i = 0; i < range; i++)
   {
       printf("%d ",array2[i]);
   }
}
