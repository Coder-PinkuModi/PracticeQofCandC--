#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int storeWaterBruteforce(vector<int>height){
    int minOfMaxHeight=0,n=height.size(),index,maxLeft=0,maxRight=0,storedWater=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ //loop to find the leftMax at particular index
        if(maxLeft<height[j]) maxLeft=height[j];
        }
        for(int k=i+1;k<=n-1;k++){
            if(maxRight<height[k]) maxRight=height[k];
        }
        
        if(maxLeft!=0 && maxRight!=0){
            minOfMaxHeight=min(maxLeft,maxRight);
            if(minOfMaxHeight-height[i]>0) storedWater+=minOfMaxHeight-height[i];
        }
        maxLeft=0;maxRight=0;
    }
    return storedWater;
}

int storeWater(vector<int>height){ //optimized method
    int maxHeight=0,n=height.size(),index,leftMax=0,rightMax=0,storedWater=0;
        for(int i=0;i<n;i++){
            if(height[i]>maxHeight) {
                maxHeight= height[i];
                index=i;
            }
        }

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
    cout<<"Total water stored: "<<totalWaterStored;

    return 0;
}