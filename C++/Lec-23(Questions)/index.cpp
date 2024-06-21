// Q: in this u have given an strict and discrete array and target, if target is present then print the index, but if target is not present then print the index+1 of the index which is immediate smaller than the target number present in the array

#include <iostream>
#include<algorithm>
using namespace std;

int indexofTarget(int arr[],int n,int x){ // x is the target
    int start=0,end=n-1,mid,index=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
    }
    return index;
}

int main()
{
    int n,x; //x is the target
    cout<<"Enter the total size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter datas of the array:";
    for (int initial = 0; initial < n; initial++)
    {
        cin>>arr[initial]
    }
    sort(arr);
    cout<<"Enter the target of the index to be found :";
    
    int index=indexofTarget(arr,n,x);
    cout<<"Index of target is: "<<index;
    return 0;
}