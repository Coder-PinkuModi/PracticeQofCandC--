// here we are going to reverse of an array without using another ARRAY !
#include<stdio.h>
void rev(int arr[],int n)
{
    int i,j,temp=0;
    for(i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void main(){
    printf("Enter the size of an Array :");
    int n,j=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr,n);
    for(int k=0;k<=n-1;k++){
        // to print the reverse array
        printf("%d ",arr[k]);
    }
}