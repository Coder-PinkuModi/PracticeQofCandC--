#include<stdio.h>
int main()
{
    int no;
    printf("Enter the number till u want to print even number :");
    scanf("%d", &no);
    for(int i=2;i<=no; i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}