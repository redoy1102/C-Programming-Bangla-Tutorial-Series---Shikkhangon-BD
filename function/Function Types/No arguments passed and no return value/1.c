#include<stdio.h>
int add(int x, int y);  //!Function Prototype

void main(){
    int result;
    result = add(10, 20);
    printf("Sum of two numbers = %d", result);
}

int add(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}