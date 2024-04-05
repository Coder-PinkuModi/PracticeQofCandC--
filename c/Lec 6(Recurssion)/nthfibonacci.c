#include<stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==0) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    printf("Enter the nth number to print it's corresponce fibonacci value:");
    int n;
    scanf("%d",&n);
    int fibo=fibonacci(n);
    printf("The value is %d",fibo);
    return 0;
}