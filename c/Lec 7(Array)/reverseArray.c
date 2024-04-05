// here we are going to reverse of an array in another array and then print it
#include<stdio.h>
void main(){
    printf("Enter the size of an Array :");
    int n,j=1;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[n-j]=arr1[i];
        j++;
    }
     for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr2[i]);
    }
}