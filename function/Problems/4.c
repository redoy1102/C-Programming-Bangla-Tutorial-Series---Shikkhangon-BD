#include<stdio.h>
double cube(int x){
    int output;
    output = (x * x * x);
    return output;
}
void main(){
    int num;
    double res;
    printf("Enter any number - ");
    scanf("%d",&num);

    res = cube(num);

    printf("Cube of %d = %.0lf", num, res);
    
}