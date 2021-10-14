#include<stdio.h>
int add(){
    int a = 10, b = 20, res;
    res = a + b;
    return res;
}
int sub(){
    int a = 5, b = 6, res;
    res = b - a;
    return res;
}

void main(){
    printf("Summation of a and b = %d\n",add());
    printf("Subtraction between a and b = %d",sub());
}