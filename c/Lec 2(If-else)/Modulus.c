//To print the positive number whaterever maybe the entered by user
#include<stdio.h>
int main()
{
    int no_1,no_2;
    printf("Enter the number :");
    scanf("%d", &no_1);
    if(no_1>=0)
    {
     printf("The number is : %d" ,no_1);
    }
    else if(no_1<0)
    {
     no_2=(-1)*no_1;
     printf("the number is : %d",no_2);
    }
    return 0;
}