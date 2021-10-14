#include<stdio.h>
void main(){
    float cgpa;
    int key, registry, accounts;
    printf("Enter your CGPA: ");
    scanf("%f",&cgpa);
    if(cgpa >= 2.50 && cgpa <= 4){
        printf("\nCongrats! You will be able to enroll course in online.");
    }
    else if(cgpa > 4){
        printf("Invalid CGPA !!");
    }
    else if(cgpa < 2.50){
        printf("\nYou are in probation. So you should come to the department.\n");
        printf("Press the key of lift for going to your department:  ");
        scanf("%d",&key);
        if(key == 4){
            printf("\nCongrats!! You are in your department.");
            printf("\nNow you need to clear the previous dues and go to the registry office.");
            printf("\nPress the key of lift for going to your registry office:  ");
            scanf("%d",&registry);
            if(registry == 2){
                printf("\nNow you are in registry office. Please submit an application for late payment.");
                printf("\nNow you need to go to the accounts.");
                printf("\nPress the key of lift for going to the accounts: ");
                scanf("%d",&accounts);
                if(accounts == 1){
                    printf("\nYou are in accounts.Now clear the dues from the accounts and you will come to the department again.");
                }
                    else if( (accounts == 0) || (accounts >=2 && accounts <=6) ){
                        printf("You are in %d number floor. But you need to go to accounts which is situated in level 1",accounts);
                    }
                    else if(accounts > 6){
                        printf("\nThe level is in under construction. ");
                    }
                }
            else if( (registry >= 0 && registry <= 1) || (registry >= 3  &&  registry <= 6) ){
                printf("\aYou are in %d number floor.But you need to go to registry office which is situated in level 2",registry);
            }
        }
        else if( (key >= 0 && key <= 3) || key == 5 || key == 6 ){
            printf("\n\aYou are in %d number floor. But you need to go to your department which is situated in level 4",key);
        }
        else if(key > 6){
            printf("\nThe level is in under construction. ");
        }
    }

}
