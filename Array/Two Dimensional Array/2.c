#include<stdio.h>
void main()
{
    int a[3][3];
    int i, j;
    printf("Enter your array: ");
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}