#include<stdio.h>
void main(){
    float celsius, fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("%f.2 celsius = %.2f fahrenheit.",celsius, fahrenheit);
}
