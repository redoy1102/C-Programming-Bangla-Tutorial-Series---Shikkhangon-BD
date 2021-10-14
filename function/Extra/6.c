#include<stdio.h>
int cat(int x, int y);
void main()
{
    int a, b, m;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    m = cat(a,b);
    //printf("Sum: %d",m);

}

int cat(int x, int y)
{
    int c;
    c = x + y;
    printf("%d",c);
    return c;
}
