#include<stdio.h>
int main(){
    printf("Enter the number till factorials to be printed :");
    int n,i,pr=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        pr=pr*i;
        printf("The %d! is : %d\n", i,pr );
    }
    return 0;
}