#include <stdio.h>
int factorial(int x)
{
    int product = 1;
    for (int i = x; i >= 1; i--)
    {
        product = product * i;
    }
    return product;
}
int combination(int a, int b)
{
    int comb = factorial(a) / ((factorial(b)) * factorial(a - b));
    return comb;
}
int main()
{
    printf("Enter the number of rows to be printed :");
    int num_1;
    scanf("%d",&num_1);
    for (int n = 0; n <= num_1; n++)
    {
        for(int k=1;k<=num_1-n;k++)
        printf(" ");
        for (int r = 0; r <= n; r++)
        {
            printf("%d ",combination(n,r));
        }
        printf("\n");
    }
    return 0;
}