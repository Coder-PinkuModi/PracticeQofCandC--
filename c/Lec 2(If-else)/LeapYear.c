#include<stdio.h>
int main()
{
    int no;
    printf("Enter the year: ");
    scanf("%d",& no);
    if (no%4==0)
    {
     printf("The year is Leap Year");
    }
    else 
    {
    printf("The year is not a leap year");
    }
    return 0;
}