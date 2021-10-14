#include<stdio.h>
#include<math.h>

void main(){
    float p, t, r, ci;
    printf("Enter the value of p, t, r = ");
    scanf("%f %f %f",&p,&t,&r);

    ci = p * (pow( (1+ r/100), t ));

    printf("You compound interest  = %.2f",ci);
    printf("\nYou total amount with interest  = %.2f",ci + p);

}