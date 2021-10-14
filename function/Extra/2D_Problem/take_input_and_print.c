#include<stdio.h>
void in(int x[][3], int y)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void out(int x[][3], int y)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int arr[10][10];
    in(arr, 3);
    out(arr, 3);
}