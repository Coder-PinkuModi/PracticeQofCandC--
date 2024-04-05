#include <stdio.h>
int main()
{
    int i,n,sum=1,a,b;
     printf("Enter which term of fibonacci is to be printed :");
     scanf("%d", &n);
     a=1;
     b=1;
     printf("The series is : %d %d", a,b);
     for(i=1;i<=(n-2);i++)
     {
        sum=a+b;
        a=b;
        b=sum;
        printf(" %d", sum);
     }
     printf("\n\n The %d term of fibbonaci series is : %d", n,sum);
     return 0;
}