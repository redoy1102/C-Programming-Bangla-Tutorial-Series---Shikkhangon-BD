#include<stdio.h>
void main(){
   char input;
   printf("Enter your grade: ");
   scanf("%c",&input);

   if(input == 'E'){
        printf("Excellent");
   }
   else if(input == 'V'){
        printf("Very Good");
   }
   else if(input == 'G'){
        printf("Good");
   }
   else if(input == 'A'){
        printf("Average");
   }
   else if(input == 'F'){
        printf("Fail");
   }
}
