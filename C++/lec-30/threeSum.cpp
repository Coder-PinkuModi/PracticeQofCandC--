// find the sum of the given target with individual sum of 3 numbers of array

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool threeSum(vector<int>arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        int start=i+1,end=n-1;
        int find = target- arr[i];
        while(start<end){
            if(arr[start]+arr[end]==find) return 1;
            else if(arr[start]+arr[end]<find) start++;
            else end--;
        }
    }
    return 0;
}

int main()
{
    int n,target;
    cout<<"Enter the number of data to be filled in the vector: ";
    cin>>n;
    vector<int>(v);
    cout<<"Enter the data in the vector one by one: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Enter the value of which the sum possible or not to be checked: ";
    cin>>target;

    int number= threeSum(v,target);
    cout<<number;
    return 0;
}