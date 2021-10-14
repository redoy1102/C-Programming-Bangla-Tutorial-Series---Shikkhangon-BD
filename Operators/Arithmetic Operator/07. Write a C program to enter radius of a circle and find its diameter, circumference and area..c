#include<stdio.h>
void main(){
    float radius, diameter, circumference,area;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    diameter = 2 *radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;

    printf("Diameter: %.2f",diameter);
    printf("\nCircumference: %.2f",circumference);
    printf("\nArea: %.2f",area);
}
