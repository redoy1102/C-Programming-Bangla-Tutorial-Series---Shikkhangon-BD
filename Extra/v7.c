//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main(){
    char character;
    printf("Enter character: ");
    scanf("%c",&character);

    if( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') ){
        printf("%c is alphabet.",character);
    }
    else{
        printf("%c is not alphabet.",character);
    }

    return 0;

}
