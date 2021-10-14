//num1 = 2
//num2 = 2
//num3 = 2
//sum = num1 + num2 + num3
//average = sum / 3
#include<stdio.h>
int main(){
    int num1, num2, num3, average;

    printf("Please give the value of num1, num2 and num3: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("Average is: %d",average);

    return 0;
}
