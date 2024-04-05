#include <stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the number want to know the number of digits :");
    scanf("%d", &n);
        while(n!=0)
        {
            n=n/10;
            ++a;
        }
         printf("The number entered is %d digit number \n",a);
    return 0;
}