#include<stdio.h>
int main()
{
    // To check the number we entered is multiple of 3 or 5 but not divisible by 15
    printf("Enter the numbet to check :");
    int n; 
    scanf("%d", &n);
    if((n%5==0 || n%3==0) && n%15!=0)
    {
        printf("The number %d is divisible by either 3 or 5 but not divisible by 15",n);
    }
    else
    {
        printf("The number doesn't match the parameters");
    }
    return 0;
}