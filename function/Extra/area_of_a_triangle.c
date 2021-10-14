#include<stdio.h>

int area(int x, int y)
{
    return (0.50 * x * y);
}

int main()
{
    int base, height;
    printf("Enter the base and height of your triangle: ");
    scanf("%d %d",&base, &height);

    printf("Area of your triangle: %d",area(base, height));
}