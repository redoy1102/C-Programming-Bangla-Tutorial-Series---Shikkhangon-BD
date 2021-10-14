#include<stdio.h>
int add(int x, int y){
    int res;
    res = x + y;
    return res;
}
void main(){
    int grandRes;
    grandRes = add(10, 20);
    printf("Summation of x and y = %d",grandRes);
}