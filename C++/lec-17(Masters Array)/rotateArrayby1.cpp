//Q: Take a array and rotate it by 1. Means if an array is arr={1,2,3,4,5} then after rotation the array is arr={5,1,2,3,4}

#include<iostream>
using namespace std;

int main(){
    int n,temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],j=0;
    cout<<"Enter the elements of the array: ";
    while(j!=n){
        cin>>arr[j];
        if(j==n-1) temp=arr[j]; 
        j++;
    }
    for(int i=n-2;i>=0;i--) arr[i+1]=arr[i];
    arr[0]=temp;
    
    // printing the rotated array :
    int k=0;
    while(k!=n) {
        cout<<arr[k]<<" ";
        k++;
        }
    return 0;
}