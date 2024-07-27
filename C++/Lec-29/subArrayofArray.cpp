// Practicing vector for hands on

#include <iostream>
#include<vector>
using namespace std;

void subArray(vector<int>varr,int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"{";
            for(int k=i;k<i+j;k++){
                cout<<varr[k]<<" ";
            }
            cout<<"}";
        }
        cout<<endl;
    }
    return;
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
    subArray(v,n);
    return 0;
}