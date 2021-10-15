#include<stdio.h>

int res(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}
void main(){
    int n1, n2;
    printf("Enter two numbers - ");
    scanf("%d %d",&n1,&n2);

    
    printf("Big number = %d",res(n1, n2));
}