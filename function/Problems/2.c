#include<stdio.h>
int x, y, result;

void input(){
    printf("Enter two numbers = ");
    scanf("%d %d",&x,&y);
}

void sum(){
    result = x + y;
    printf("Summation of %d and %d = %d", x, y, result);
}

void main(){
    input();
    sum();
}