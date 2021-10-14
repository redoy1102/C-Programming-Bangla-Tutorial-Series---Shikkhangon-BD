#include<stdio.h>
void main(){
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);

    if(character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z'){
        printf("%c is alphabet.",character);
    }
}

