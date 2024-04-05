#include<stdio.h>
int min(int a,int b)
{
    if(a>b) return b;
    else return a;
}
int main()
{
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    int hcf=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    printf("HCF is :%d",hcf);

    return 0;
}