//Suppose the area of IUBAT campus consist of a rectangular shape
//and a triangle shape building (as shown on figure).
//If the values of length, width of the rectangle as well as the
//lengths of three sides of the triangle are given as input,
//develop a program to calculate the total area of IUBAT campus.
#include<math.h>
#include<stdio.h>
void main(){
    double length, width, a, b, c, s, totalArea, rectangular,triangle;

    printf("Enter the value of length and width: ");
    scanf("%lf %lf",&length,&width);

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    rectangular = (length * width);

    s = ((a+b+c) / 2);

    triangle = sqrt(s*(s-a)*(s-b)*(s-c));

    totalArea = (rectangular + triangle);

    printf("The total area of IUBAT campus: %.2lf",totalArea);

}
