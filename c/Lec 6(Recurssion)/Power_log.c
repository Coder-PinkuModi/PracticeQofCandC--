#include<stdio.h>
int power(int x,int y){
    int product;
    if(y==0) return 1;
    if(y==1) return x;
    int z=power(x,(y/2));
    if(y%2==0) return z*z;
    else return z*z*x;
}
int main()
{
    int a,b;
    printf("Enter the base number :");
    scanf("%d",&a);
    printf("Enter the power number :");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("%d to the power %d is : %d",a,b,ans);
    return 0;
}