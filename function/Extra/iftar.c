#include<stdio.h>
void main()
{
    int ar[10][10],br[10][10],ml[10][10],ad[10][10],sb[10][10],key;
    //taking input
    printf("Enter 1st Matrix Element - ");
    in(ar,3);
    printf("Enter 2nd Matrix Element - ");
    in(br,3);
    printf("1st Matrix \n ");
    out(ar,3);
    printf("2nd Matrix \n ");
    out(br,3);
    //making menu
    printf("\npress 1 to Addition ");
    printf("\npress 2 to Subtraction ");
    printf("\npress 3 to Multiplication ");
    printf("\npress 4 to Transpose ");
    printf("\npress 0 to Exit the program ");
    lv:
    scanf("%d",&key);
    switch(key)
    {
        case 1:
            printf("Addition - \n");
            add(ar,br,ad,3,3,3);
            out(ad,3);
            goto lv;
            break;
        case 2:
            printf("Subtraction - \n");
            sub(ar,br,sb,3,3,3);
            out(sb,3);
            goto lv;
            break;
        case 3:
            printf("Multiplication - \n");
            multi(ar,br,ml,3,3,3);
            out(ml,3);
            goto lv;
            break;
        case 4:
            printf("Transpose - \n");
            trans(ar,3);
            goto lv;
            break;
        default:
            printf("Program Exit !!");

    }
}

void in(int a[][3],int x)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void out(int a[][3],int x)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void trans(int a[][3],int x)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
void add(int a[][3],int b[][3],int c[][3],int x,int y,int z)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
void sub(int a[][3],int b[][3],int d[][3],int x,int y,int z)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
}
void multi(int a[][3],int b[][3],int m[][3],int x,int y,int z)
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            m[i][j]=0;
            for(k=1;k<=3;k++)
            {
                m[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

