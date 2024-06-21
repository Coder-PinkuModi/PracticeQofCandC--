#include <iostream>
#include<algorithm>

using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
       int mid= start + (end-start)/2;
       
       if(arr[mid]==key) return mid;
       else if(arr[mid]<key) start=mid+1;
       else end=mid-1;
    }
    return -1; // if searched key is not present
}

void increasort(int arr[], int n)
{
    // by insertion sort
    for (int initial = 1; initial < n; initial++)
    {
        bool flag=false;
        for (int initial2 = initial; initial2 >  0; initial2--)
        {
            if(arr[initial2]<arr[initial2-1]){
                swap(arr[initial2],arr[initial2-1]);
                flag=true;
            }
            if(flag == false) break;
            flag= false;
        }
    }
}

int main()
{
    int n1, n2;
    cout << "Enter the size of the array: ";
    cin >> n1;
    int arr[n1];
    cout << "Enter the data of array: ";
    for (int initial = 0; initial < n1; initial++)
    {
        cin >> arr[initial];
    }

    increasort(arr, n1);

     for (int initial = 0; initial < n1; initial++)
    {
        cout << arr[initial]<<" ";
    }
    

    cout << "Enter the number to find in array: ";
    cin >> n2;

    cout<<binarySearch(arr, n1,n2);

    return 0;

}