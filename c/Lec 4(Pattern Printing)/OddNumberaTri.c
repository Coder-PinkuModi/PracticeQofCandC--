#include<stdio.h>
int main(){
    printf("Eter the number of rows to be printed :");
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i*2;j++)
        {
            if(j%2!=0) printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}