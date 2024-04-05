/*minimum of the number in the given array data without using limits.h*/
#include<stdio.h>
void main()
{
    int arr[10]={25,54,65,85,74,93,25,16,45,73};
    int min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    printf("Minimum number of the given array is: %d",min);
}