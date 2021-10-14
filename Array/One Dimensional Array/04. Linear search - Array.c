#include<stdio.h>
void main()
{
    int i, n, pos, m, arr[100] ;
    printf("Enter your range to make an array: ");
    scanf("%d",&m);

    printf("\nEnter your arrays value: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number you want to search: ");
    scanf("%d",&n);
    pos = -1;
    for(i = 0; i < m; i++)
    {
        if(n == arr[i])
        {
            pos = i + 1;
            break;
        }
    }
      if(pos == -1)
        {
            printf("%d is not found in your array.",n);
        }else printf("\n\tNumber is found. Position of %d is = %d\n",n,pos);

}
