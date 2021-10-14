//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main(){
    char alphabet;

    printf("Enter any alphabet: ");
    scanf("%c",&alphabet);

    //a,e,i,o,u

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
        printf("%c is vowel",alphabet);
    }
    else{
        printf("%c is consonant",alphabet);
    }
    return 0;

}
