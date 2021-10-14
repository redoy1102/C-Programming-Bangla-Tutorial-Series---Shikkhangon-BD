#include<stdio.h>

void sum(int x, int y){
    int result;
    result = x + y;
    printf("Sum of %d and %d = %d\n", x, y, result);
}

void main(){
    sum(10, 20);
    sum(20, 10);
    sum(30, 50);
}