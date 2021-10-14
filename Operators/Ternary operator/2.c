//C program to find maximum between three numbers

#include<stdio.h>
void main(){
    int x, y, z, big;
    printf("Enter three numbers = ");
    scanf("%d %d %d",&x, &y, &z);

    big = ((x > y) && (x > z)) ? x : ( y > z) ? y : z; 

    printf("%d is big.",big);

}