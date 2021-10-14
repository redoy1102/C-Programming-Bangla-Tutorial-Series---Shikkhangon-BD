#include<stdio.h>
void main()
{
    int n, sum, rem;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    if(n == 0)
    {
        printf("You entered 0");
    }else{
        sum = 0;
        rem = 0;
        while(n != 0){
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        printf("Sum is : %d",sum);
    }
}
