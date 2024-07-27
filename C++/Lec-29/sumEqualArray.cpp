// in this we have to divide the array in two halves, both the subarray's sum will be equal- if possible then return true else false from the function and print yes or no repectively based on the condition

#include <iostream>
#include<vector>
using namespace std;

bool subEqualhalves(vector<int>varr,int n){
    int sum=0,prefix=0;
    for(auto i:varr){
        sum+=i;
    }
     
     if (sum % 2 != 0) return false;

    for(int i=0;i<n;i++){
        prefix+=varr[i];
        if(prefix==sum/2) return true;
    }
    return false;
}

int main()
{
     int n;
    cout<<"Enter the total length of a vector: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool ans = subEqualhalves(v,n);
    if(ans) cout<<"Yes";
    else cout<<"No";
    return 0;
}