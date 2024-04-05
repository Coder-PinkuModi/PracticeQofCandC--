#include<stdio.h>
// program to check memory allocation of array
int main()
{
    int arr[4];
    for(int i=0;i<=3;i++)
    {
        printf("%p\n",&arr[i]);
    }
}