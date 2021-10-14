//Problem-13: Write a C Program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
void main(){
    int angle1, angle2, angle3;
    printf("Enter first angle = ");
    scanf("%d",&angle1);

    printf("\nEnter the 2nd angle = ");
    scanf("%d",&angle2);

    angle3 = 180-(angle1+angle2);
    printf("The value of 3rd angle = %d",angle3);
}

