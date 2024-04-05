#include<stdio.h>
int main()
{
    printf("Enter the number to check number is Armstrong is not :");
    int num,a=0,sum=0;
    scanf("%d",&num);
    int num_2=num;
    int num_3=num;
    while(num_2!=0)// to find the number of digits in num
    {
        num_2=num_2/10;
        ++a;
    }
    for(int i=1;i<=a;i++)
    {
        int k=num%10;
        int digit_power= pow(k,a);
        num=num/10;
        sum=sum+digit_power;
    }
    if(num_3==sum) printf("The number %d is Armstrong number",num_3);
    else printf("The number %d is not a Armstrong number",num_3);
    return 0;
}