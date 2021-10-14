//Problem-10: Write a C Program to convert days into years, weeks.
#include<stdio.h>
void main(){
    float celsius, fahrenheit;
    printf("Enter fahrenheit temperature = ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32) * 5/9;
    printf("%.2f degree fahrenheit = %.2f degree celsius",fahrenheit,celsius);
}
