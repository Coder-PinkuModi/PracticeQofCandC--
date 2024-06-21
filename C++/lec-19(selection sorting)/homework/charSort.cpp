#include<iostream>
#include <algorithm>
using namespace std;

void charSort(char arr[], int n){
    for (int initial = 0; initial < n-1; initial++) {
        int minIndex=initial;
        for (int j = initial+1; j < n; j++) {
            if((int)arr[j]<(int)arr[minIndex]) minIndex=j;
        }
        swap(arr[minIndex],arr[initial]);
    }
}

 int main()
{
    int n;
    cout<<"Enter total number of data: ";
    cin>>n;
    char arr[n];
    cout<<"Enter data of character in array: ";
    for (int initial = 0; initial < n; initial++) {
        cin>>arr[initial];
    }

    charSort(arr,n);
    for (int initial = 0; initial < n; initial++) {
        cout<<arr[initial]<<" ";
    }
    return 0;
}