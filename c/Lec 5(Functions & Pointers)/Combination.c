#include<stdio.h> 
int factorial(int x)
{
    int product=1;
 for(int i=x;i>=1;i--){
    product=product*i;
 }
 return product;
}
int main()
{
    printf("Enter the first number :");
    int num_1,num_2;
    scanf("%d", &num_1);
    printf("Enter the seconnd number :");
    scanf("%d", &num_2);
    int combination=factorial(num_1)/((factorial(num_2))*factorial(num_1-num_2));
    printf("%d", combination);
    return 0;
}