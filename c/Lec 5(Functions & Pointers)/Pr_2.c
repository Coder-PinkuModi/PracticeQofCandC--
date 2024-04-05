#include<stdio.h>
int main()
{
    int m=9;
    int* x=&m;
    int** y=&x;
    printf("%p\n",&m); //will print the address of m
    printf("%p\n",x);
    printf("%p\n",&x);  
    printf("%d\n",*x);  //provoking the value of variable whose address is stored in pointer x   
    printf("%d\n",**y);
    printf("%p\n",&y);

    return 0;
}
