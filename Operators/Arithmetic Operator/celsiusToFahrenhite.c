//Problem-08: Write a C Program to enter temperature in Celsius and convert to Fahrenheit.
#include<stdio.h>
void main(){
    float c, f;
    printf("Enter celsius temperature = ");
    scanf("%f",&c);

    f = c*9/5+32;
    printf("%.2f degree temperature  in fahreheit = %.2f degree",c,f);
}

