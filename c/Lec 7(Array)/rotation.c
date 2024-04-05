//Q:Rotate the given array 'a' by k steps, where k is non-negative 
//Note: K can be greater than n as well where n is the size of array 'a'
#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
    int i,j,temp=0;
    for(i=si,j=ei;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
     printf("Enter the size of an Array :");
    int n,k;
    scanf("%d",&n);
     printf("Enter the number of rotation :");
    scanf("%d",&k);
    k=k%n;
    int arr[n];
    printf("Enter the terms of the Array :");
     for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
     for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
} 
    