#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nEven numbers: ");
    for(i = 1; i <= num; i++)
    {
        if( i%2 == 0){
                printf("%d ",i);
        }
    }
    printf("\nOdd numbers: ");
    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
