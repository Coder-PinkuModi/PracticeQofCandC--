#include<stdio.h>
 int change(int); //prototype of a function
int main()
{
    int num=22;
   int ch= change(num);
    printf("%d",ch);
    return 0;
}
int change(int x)
{
    int num=100+x;
    return num;
}