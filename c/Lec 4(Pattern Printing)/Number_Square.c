#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter the number till u want to Number Square :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}