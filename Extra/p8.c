//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main(){
    int ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is vowel",ch);
    } else{
        printf("%c is consonant",ch);
    }
    return 0;

}
