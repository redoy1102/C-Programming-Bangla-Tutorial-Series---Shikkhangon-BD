#include<stdio.h>
void main()
{
   int array[100], i, range, neg, count;
   printf("Enter the range of your array: ");
   scanf("%d",&range);
   printf("Enter your array: ");
   for(i = 0; i < range; i++)
   {
       scanf("%d",&array[i]);
   }
   count = 0;
   for(i = 0; i < range; i++)
   {
       if(array[i] < 0)
       {
           count++;
       }
   }
   printf("Total negative number: %d",count);
}