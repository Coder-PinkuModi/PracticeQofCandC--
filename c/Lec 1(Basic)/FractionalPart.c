#include<stdio.h>
int main()
{
    printf("Enter the number of which fractional prat is to be printed:");
    float no1,no2;
    scanf("%f",&no1);
    int no3=no1;
    no2=no1-no3;
    printf("The no is : %f", no2);
    return 0;
}