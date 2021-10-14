#include <stdio.h>
void main() {
    int R, S, T;
    printf("Hey R!! Enter your age: ");
    scanf("%d", &R);

	printf("Hey S!! Enter your age: ");
	scanf("%d",&S);

	printf("Hey T!! Enter your age: ");
	scanf("%d",&T);

    if(R > S && R > T){
        printf("%d is largest number.",R); //R large
        if(S>T){
            printf("\n%d is midest number.",S); //S mid
            printf("\n%d is lowest number.",T); //T low
        }
    }
}
