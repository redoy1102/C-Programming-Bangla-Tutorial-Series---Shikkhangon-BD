#include<stdio.h>
int add(int x, int y, int z){
    int res;
    res = x + y + z;
    printf("Summation of x and y = %d",res);
}

void main(){
    add(10, 20, 30);
}