#include<stdio.h>
void main()
{
    int n,i,key;
    printf("Enter the number:");
    scanf("%d",&n);
    key=2;
    level:
        switch (key)
        {
        case 2:
            printf("Even number are: ");
            goto jump;
            break;
        default :
            printf("\nOdd number are:  ");
            break ;
        }
        jump :
            for (i=key;i<=n;i+=2){

                printf("%d\t",i);
            }
            if (key==2)
            {
                key=1;
                goto level;
            }
}
