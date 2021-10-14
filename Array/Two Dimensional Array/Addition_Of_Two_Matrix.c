#include<stdio.h>
void main()
{
    int A[10][10], B[10][10], C[10][10], i, j;
    int numberOfRows, numberOfCols;
    printf("Enter the number of columns and rows of your matrix: ");
    scanf("%d %d",&numberOfRows, &numberOfCols);

    //scanning A matrix and B matrix
    printf("Enter elements for A matrix: \n");
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter elements for B matrix: \n");
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    //printing A matrix and B matrix
    printf("\nA = ");
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB = ");
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            printf("\t%d",B[i][j]);
        }
        printf("\n");
    }

    //adding A matrix and B matrix
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }

    //printing C Matrix
    printf("A + B = \n");
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfCols; j++)
        {
            printf("\t%d",C[i][j]);
        }
        printf("\n");
    }
}