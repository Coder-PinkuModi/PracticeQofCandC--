#include<stdio.h>
void main()
{
    int arr[4]={2,5,3,4},pro=1;
    for(int i=0;i<=3;i++){
        pro=pro*arr[i];
    }
    printf("%d",pro);
}