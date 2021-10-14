#include<stdio.h>
void main()
{
    int A[10][10], transpose[10][10], i, j, r1, c1;
    printf("Enter the number row and col for matrix A: ");
    scanf("%d %d",&r1,&c1);

    printf("\nEnter the elements for matrix A: ");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nMatrix A = \n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    //making logic of transpose matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    //printing transpose matrix
    printf("\nTranspose matrix: \n");
    for(i = 0; i < c1; i++)
    {
        for(j = 0; j < r1; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
}