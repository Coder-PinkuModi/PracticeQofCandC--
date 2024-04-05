#include <stdio.h>
int main()
{
    int n;
    printf("Enter the odd number of rows to be printed :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int g=(n/2)+1;
            if (j==g || i==g)
            printf("* ");
            else
            printf("  ");
        }
        
        printf("\n");
    }
    return 0;
}