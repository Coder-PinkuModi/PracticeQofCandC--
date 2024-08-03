#include <iostream>
#include<vector>
using namespace std;

int storeWater(vector<int>height){
    int maxHeight=0,n=height.size(),index,leftMax=0,rightMax=0,storedWater=0;
        for(int i=0;i<n;i++){
            if(height[i]>maxHeight) {
                maxHeight= height[i];
                index=i;
            }
        }

        cout<<"maxHieht: "<<height[index]<<endl;

        for(int i=0;i<index;i++){
            if(leftMax>height[i])
                storedWater+=leftMax-height[i];
            else leftMax=height[i];
        }

        for(int i=n-1;i>index;i--){
            if(rightMax>height[i])
                storedWater+= rightMax - height[i];
            else rightMax=height[i];
        }
        
        return storedWater;
}
int main()
{
    int n;
    cout<<"Enter the total number of elements in the vector: ";
    cin>>n;
    vector<int>height(n);
    cout<<"Enter the data of the vector one by one: ";
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }
    
    int totalWaterStored = storeWater(height);
    cout<<totalWaterStored;

    return 0;
}