#include<stdio.h>
int main(){
    int n,a[100],i,max,min;

    printf("Enter any number: ");
    scanf("%d",&n);

    printf("\nOk! Enter your %d numbers: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    max = a[0]; //20
    min = a[0]; //20

    for(i=1; i<n; i++){ // 30
        if(max < a[i]){
            max = a[i];
        }
        else{
            min = a[i];
        }
    }

    printf("\n\nYou maximum number is %d",max);
    printf("\n\nYou minimum number is %d",min);

    getch();
}
