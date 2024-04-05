#include<stdio.h>
void series(int n)
{
    if(n==0) return; //base code which will end recurrsion
     printf("%d\n",n);
     series(n-1);
     printf("%d\n",n);
     return;
}
int main() //whole series will take place by recurrsion
{
    int n;
    printf("Enter the number for start of series :");
    scanf("%d",&n);
    series(n);
    return 0;
}