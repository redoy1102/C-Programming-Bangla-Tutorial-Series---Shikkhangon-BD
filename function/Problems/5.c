#include<stdio.h>
double input(){
    double r;
    printf("Enter radius of your circle = ");
    scanf("%lf",&r);
    return r;
}
void dia(double rr){
    printf("Diameter of this circle = %lf\n", (2*rr));
}
void cir(double rr){
    printf("Circumference of this circle = %lf\n", (2*3.1416*rr));
}
void ar(double rr){
    printf("Area of this circle = %lf\n", (3.1416 * rr * rr));
}

void main(){
    double rr;
    rr = input();
    dia(rr);
    cir(rr);
    ar(rr);
}