#include<stdio.h>
void main()
{
    int x = 5;
    printf("Value of x = %d\n",x);
    printf("Address of x = %d",&x);

    int *ptr;
    ptr = &x;

    printf("\n\nptr = %d",ptr);
    printf("\nValue of ptr = %d",*ptr);
    printf("\nAddress of pointer = %d",&ptr);

}