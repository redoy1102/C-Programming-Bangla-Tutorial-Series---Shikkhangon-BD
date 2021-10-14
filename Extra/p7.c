//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main(){
    int ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){

        printf("You character %c is alphabet",ch);

    } else{
        printf("You character %c is not alphabet",ch);
    }
    return 0;

}
