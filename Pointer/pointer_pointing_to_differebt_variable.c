#include<stdio.h>

void pointer(int a)
{
    int *ptr;
    ptr = &a;

    printf("Address of %d: %d\n",*ptr,ptr);
    printf("Value: %d\n",*ptr);

}
void main()
{
    int x, y, z;
    x = 5; y = 6; z = 7;

    pointer(x);
    pointer(y);
    pointer(z);
}