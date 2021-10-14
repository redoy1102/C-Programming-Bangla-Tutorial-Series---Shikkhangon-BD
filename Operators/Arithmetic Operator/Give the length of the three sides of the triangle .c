#include<stdio.h>
int main(){
    int a, b, c, s, A;
    printf("Give the length of the three sides of the triangle: ");
    scanf("%d %d %d",&a, &b, &c);

    s = (a + b + c);

    A = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("\nThe area of triangle: %d",A);
    return 0;
}

