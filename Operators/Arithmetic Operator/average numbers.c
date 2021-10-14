//num1 = 10
//num2 = 20
//num3 = 30
//sum = num1 + num2 + num3
//average = sum / 3
#include<stdio.h>
int main(){
    //variable section
    int num1, num2, num3, average;

    //input section
    printf("Give me the value of num1, num2, num3: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("\nAverage is: %d",average);

    return 0;
}
