#include<stdio.h>
int main()
{    //METHOD 1 by normal code without %
    int no1,no2,remainder;
    printf("Enter the no. which u want to divide:");
    scanf("%d",& no1);
    printf("Enter the no. which u want as divider:");
    scanf("%d",& no2);
    int divide= no1/no2;
    remainder= no1- (divide*no2);
    printf("THe remainder is by M1: %d \n", remainder); 

     // METHOD 2 by % symbol
     printf("The ramainder is by M2: %d", no1%no2);
    return 0; 
}