#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter elements in the array: ";
    
    for (int j = n-1,i=0; j >= 0,i<n; j--,i++)
    {
        cin>>arr1[i];
        arr2[j]=arr1[i];
    
    }  // we can do same thing with swapping of the elements, swapping starts from the ends of the array!!
    cout<<"Reverse Array is : ";
    for (int j = 0;j< n; j++)
    {
        cout<<arr2[j]<<" ";
    }
    return 0;
}

