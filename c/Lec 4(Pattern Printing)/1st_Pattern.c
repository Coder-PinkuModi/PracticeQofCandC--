#include<stdio.h>
int main()
{
    printf("Enter the number of rows to be printed :");
    int n,m;
    scanf("%d",&n);
    printf("Enter the number of columns to be printed :");
    scanf("%d",&m);
    char ch='*';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}