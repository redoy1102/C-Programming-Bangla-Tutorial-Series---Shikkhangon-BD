#include<stdio.h>
#include<math.h>
void main(){
    float side, result;

    printf("Enter the value of side = ");
    scanf("%f",&side);

    result = (sqrt(3) / 4) * (side * side);

    printf("Area of an equilateral triangle = %.2f",result);
}