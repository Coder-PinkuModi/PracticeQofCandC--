#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the total number for the array data :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the data of the array respectively :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of the array is %d",sum);
}