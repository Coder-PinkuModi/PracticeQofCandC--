#include<stdio.h>
int main()
{
    int n;
    printf("Enter the odd number of rows to be printed :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int g=n/2+1;
        for(int j=1;j<=n;j++)
        {
            if(j==i || (i+j)==(n+1)) printf("* ");
            else printf("  ");
          
        }
        printf("\n");
    }
    return 0;
}