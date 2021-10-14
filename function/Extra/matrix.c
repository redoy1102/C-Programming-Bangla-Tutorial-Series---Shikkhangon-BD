#include<stdio.h>
void main()
{
    int a1[10][10],b1[10][10], ad1[10][10], sb1[10][10], mul1[10][10],i,j,k, input;
    printf("Input 1st matrix element - ");
    in(a1,3);
    printf("Input 2nd matrix element - ");
    in(b1,3);

    printf("Enter 1 for addition.\n");
    printf("Enter 2 for subtraction.");
    printf("\nEnter 3 for multiplication.");
    printf("\nEnter 4 for transpose.");
    printf("\nEnter 0 to exit.");

    printf("\nEnter a number: ");
    scanf("%d",&input);


    switch(input)
    {
        //addition
        case 1:
        add(a1,b1,ad1,3,3,3);
        out(ad1, 3);
        break;

        case 2:
        sub(a1,b1,sb1,3,3,3);
        out(sb1,3);
        break;

        case 3:
        mult(a1,b1,mul1,3,3,3);
        out(mul1, 3);
        break;

        case 4:
        trans(a1,3);
        break;

        default:
        printf("Your program exit.");
        break;
    }
}

//getting input
void in(int ar[][3],int x)
{
    int i,j;
   for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    } 
}

//multiplication
void mult(int ar[][3],int br[][3],int m[][3],int x,int y,int z)
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            m[i][j]=0;
            for(k=1;k<=3;k++)
            {
                m[i][j]=m[i][j]+ar[i][k]*br[k][j];
            }
        }
    }
}

//getting output
void out(int c[][3],int x)
{
   int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

//addition
void add(int a[][10],int b[][10], int c[][10], int x, int y, int z)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

//subtraction
void sub(int a[][10],int b[][10], int r[][10], int x, int y, int z)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
}

//transpose of a matrix
void trans(int a[][10], int x)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}

