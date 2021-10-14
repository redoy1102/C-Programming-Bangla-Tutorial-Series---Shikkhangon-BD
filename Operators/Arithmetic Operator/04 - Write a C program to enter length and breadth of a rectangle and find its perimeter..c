#include<stdio.h>
void main()
{
    int length, width, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d",&length);

    printf("Enter width of rectangle: ");
    scanf("%d",&width);

    perimeter = 2 * (length + width);

    printf("\nPerimeter of rectangle: %d",perimeter);

}
