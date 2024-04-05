#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the rows to be printed :");
    scanf("%d",&n);
    for (i = 1; i<=n; i++)
    {
        for (int j =1; j<=n+1-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}