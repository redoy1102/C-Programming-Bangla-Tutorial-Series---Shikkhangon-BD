#include<stdio.h>
void main()
{
    int A[10][10], B[10][10], Multi[10][10], i, j, k, cols1, rows1, cols2, rows2, sum;

    //taking colums and rows for A matrix
    printf("Enter number of row and column for Matrix A: ");
    scanf("%d %d",&rows1,&cols1);

    //taking colums and rows for B matrix
    printf("\nEnter number of row and column for Matrix B: ");
    scanf("%d %d",&rows2,&cols2);

    //checking condition for multiply A and B matrix
    while(cols1 != rows2)
    {
        printf("\n\n----Error! Column of first matrix not equal to row of second.");
        
        //taking colums and rows for A matrix
        printf("\n\nAgain Enter number of row and column for Matrix A: ");
        scanf("%d %d",&rows1,&cols1);

        //taking colums and rows for B matrix
        printf("\nEnter number of row and column for Matrix B: ");
        scanf("%d %d",&rows2,&cols2);
    }

    //taking A matrix
    printf("Enter elements of A matrix: \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    //taking B matrix
    printf("\nEnter elements of B matrix: \n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    //printing A and B matrix
    printf("\nA matrix: \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB matrix: \n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    //Multiply A and B
    sum = 0;
    for(i = 0; i < rows1; i++)
        {
            for(j = 0; j < cols2; j++)
            {
                for(k = 0; k < cols1; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                Multi[i][j] = sum;
                sum = 0;
            }
        }

    //printing Multi Matrix
    printf("\nA x B = \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("\t%d",Multi[i][j]);
        }
        printf("\n");
    }
}