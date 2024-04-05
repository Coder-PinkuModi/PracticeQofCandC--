#include<stdio.h>
int main()
{
    int no;
    printf("Enter the no which u want to check even or odd :");
    scanf("%d",& no);
    if(no%2==0)
    printf("The no %d is an even number", no);
    else
    printf("The no %d is an odd number", no);
    return 0;
}