#include<stdio.h>

int getArea(int x)
{
    return (3.1416*x*x);
}

double getCircumference(double x)
{
    return (2*3.1416*x);
}

double getDiameter(double x)
{
    return (2*x);
}

void main()
{
    int radius, are;
    double cir, dia;

    printf("Input radius: ");
    scanf("%d",&radius);

    are = getArea(radius);
    cir = getCircumference(radius);
    dia = getDiameter(radius);

    printf("Diameter = %.2lf units",dia);
    printf("\nCircumference = %.2lf units",cir);
    printf("\nArea = %d sq. units",are);
}