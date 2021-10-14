#include<stdio.h>
void main()
{
    int A[3][4] = {
        {5,6,7,8},
        {1,2,3,4},
        {8,9,4,5}
    }, i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}