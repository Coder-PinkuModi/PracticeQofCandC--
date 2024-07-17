#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    auto it = find(v.begin(),v.end(),9); // this will be like a pointer or a iterator points into the element to find the index of it follow up the next line
    if(it!=v.end()){
         auto index = distance( v.begin(), it); // to find the index
         cout<<index;
    }
    
    return 0;
}