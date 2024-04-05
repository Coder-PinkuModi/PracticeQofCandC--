b #include <stdio.h>
int main()
{
    int n;
    printf("Enter the number or rows to be printed :");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            printf("*");
        }
        else if (i > 1)
        {
            for (int j = 1; j <= nst; j++)
            {
                printf("*");
            }
            for (int k = 1; k <= nsp; k++)
            {
                printf(" ");
            }
            for (int m = 1; m <= nst; m++)
            {
                printf("*");
            }
            nsp += 2;
            nst--;
        }
        printf("\n");
    }
    return 0;
}