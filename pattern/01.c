//matrix
#include<stdio.h>
void main()
{
    int row,col;
    for(row = 1; row <= 3; row++)
    {
        for(col = 1; col <= 3; col++)
        {
            printf("%d",row+col);
        }
        printf("\n");
    }
}
