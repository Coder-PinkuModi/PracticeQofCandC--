#include <stdio.h>
int main()
{
    printf("Enter the number of rows to be printed :");
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
    {
        printf(" ");
    }
        int comb = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", comb);
            comb = comb * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}