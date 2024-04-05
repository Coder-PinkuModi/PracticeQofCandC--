#include<stdio.h>
int main()
{
    float x,z;
    printf("Enter the radius of a Sphere \n");
    scanf("%f",&x);
    z=(4/3.0)*3.14*(x*x*x);
    printf("THe Volume of Sphere is: %f",z);
    return 0;
}