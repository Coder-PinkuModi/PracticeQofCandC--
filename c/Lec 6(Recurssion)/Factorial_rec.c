#include<stdio.h>
int factorial(int n) // Factorial through recurssion
{
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter a number to print it's factorial :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("Factorial of %d is : %d",n,fact);
    return 0;
}