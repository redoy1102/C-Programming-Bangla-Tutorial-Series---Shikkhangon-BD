#include<stdio.h>
void main(){
    float a, b, c, discriminant;
    float root1, root2;

    printf("Enter the value of a, b, c : ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = (b*b) - (4*a*c);

    switch(discriminant > 0)
    {
        case 1:
            root1 = (-b + sqrt(discriminant));
            root2 = (-b - sqrt(discriminant));

            printf("Two distinct and real roots exists: %.2f %.2f",root1,root2);
            break;

        case 0:
            switch(discriminant < 0)
            {
            case 1:

            }
    }
}
