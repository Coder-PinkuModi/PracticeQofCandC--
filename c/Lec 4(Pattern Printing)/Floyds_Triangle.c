#include<stdio.h>
int main(){
    printf("Enter the number of rows to be printed :");
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}