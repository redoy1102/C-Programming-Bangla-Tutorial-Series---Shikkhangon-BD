#include<stdio.h>
void main()
{
    int num, count;
    printf("Enter a number: ");
    scanf("%d",&num);//1
    count = 0; //4
    do
    {
        count++;
        num = num / 10;//0
    }while(num != 0);
    printf("Total digit: %d",count);
}
