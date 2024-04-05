#include<stdio.h>
int main(){
    int n,r=0,i;
    printf("Enter the number to print it's reverse :");
    scanf("%d", &n);
    for(;n!=0;) // by this we can also use for loop in this type of codes
    {
        i=n%10;
        r=(r*10) + i;
        n=n/10;
    }
    printf("Reverse is : %d", r);
    return 0;
}