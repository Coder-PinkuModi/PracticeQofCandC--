#include<stdio.h>
void swap(int* x,int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return;
}
int main() //swapping number by method of call by reference
{
    int a,b;
    printf("Enter number a:\n");
    scanf("%d",&a);
    printf("Enter number b:\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Number a is :%d\n",a);
    printf("Number b is :%d\n",b);
    return 0;
}