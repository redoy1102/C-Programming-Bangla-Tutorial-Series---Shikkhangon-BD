#include<stdio.h>
void main()
{
    int A[10][10], row , col, i, j;
    printf("Enter row and col size: ");
    scanf("%d %d",&row, &col);

    printf("Enter array elements: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nYour entered array: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}