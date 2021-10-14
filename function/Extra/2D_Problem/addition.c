#include<stdio.h>
void in(int a[][3], int x)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void out(int a[][3], int x)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void ad(int a[][3], int b[][3], int sum[][3], int x, int y, int z)
{
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}
void main()
{
    int ar[10][10], br[10][10], add[10][10];
    printf("Enter 1st matrix - ");
    in(ar,3);

    printf("\nEnter 2nd matrix - ");
    in(br,3);

    printf("\n1st matrix - \n");
    out(ar, 3);

    printf("\n2nd matrix - \n");
    out(br, 3);

    ad(ar, br, add, 3,3,3);
    printf("\nAddition of two matrix - \n");
    out(add,3);
}