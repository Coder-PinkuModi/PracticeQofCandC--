/*/Program to find the maximum of the numbers in the array data
in this program going to use <limits.h> header file to  access the minimum and maximum number available in int datatype*/
#include<stdio.h>
#include<limits.h>
void main()
{
    int max=INT_MIN; // we store minimum to max variable so to compare properly
    int arr[10]={2,34,4,13,5,7,89,96,79,88};
    for(int i=0;i<10;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    printf("Maximum number of the given array is: %d",max);
}