#include<stdio.h>
int main(){


       int temp;
       printf("enter a number ");
       scanf("%d",&temp);
       if(temp<0){
         printf("freezing weather");
       }
        else if(temp<10){
            printf(" very cold weather");
        }
         else if(temp=10<20){
            printf("cold weather");

         }
          else if(temp=20<30){
             printf("normal in temp");
          }
           else if(temp=30<40){
              printf("its hot");
             }
            else if("temp>=40"){
                printf("its very hot");
            }

}
