#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number to sum all it's digit :");
    scanf("%d", &n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}