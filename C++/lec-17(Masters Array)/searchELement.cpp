//Q: get the index of the element present in an user given array
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found at index : "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}

