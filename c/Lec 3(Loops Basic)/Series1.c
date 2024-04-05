#include <stdio.h>
int main()
{ // series =1-2+3-4+5-6+7-8....
    int n, i, sum = 0;
    printf("Enter the number till series to be printed:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("The sum of Series is : %d", sum);
    return 0;
}