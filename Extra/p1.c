//Write a C program to find maximum between two numbers.
#include<stdio.h>
int main(){
    int num1,num2,big;
    printf("Enter two number for num1 and num2: ");
    scanf("%d %d",&num1,&num2);

    big = (num1 > num2) ? num1 : num2;

    printf("%d is big",big);
    return 0;

}
