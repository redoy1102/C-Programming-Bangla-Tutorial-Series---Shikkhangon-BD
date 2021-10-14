#include<stdio.h>
int main(){
    int x1, x2, D, y1, y2;

    printf("Enter the value of x1, x2, y1, y2: ");
    scanf("%d %d %d %d",&x1, &x2, &y1, &y2);

    D = sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );

    printf("The value of D: %d",D);
}
