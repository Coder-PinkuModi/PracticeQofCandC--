#include<stdio.h>
int add(int a,int b){ // example of function declared in int and with some value in return 
    return(a+b);
}
int main(){
    int a,b,sum;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("%d",sum);
    return 0;
}