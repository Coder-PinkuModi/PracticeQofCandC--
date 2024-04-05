#include<stdio.h>
int stair(int n) // The function is to give the number of ways one can go up the stair
// **condition one can take only single or double steps at a time
{
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}
int main()
{
    printf("Enter the number of stair :");
    int n;
    scanf("%d",n);
    printf("The number of ways u can go up :%d",stair(n));
    return 0;
}