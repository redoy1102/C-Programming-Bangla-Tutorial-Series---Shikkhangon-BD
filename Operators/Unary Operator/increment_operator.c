//pre increment = ++x
//post increment = x++

//pre decrement = --x
//post decrement = x--

#include<stdio.h>
void main(){
    int x = 10;

    int y = --x;    //9
    //int z = x;      //9

    printf("y = %d",y);     //10
    //printf("\nz = %d",x);      //9
}