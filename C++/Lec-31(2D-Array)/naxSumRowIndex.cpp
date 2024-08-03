// in these we have to find the sum of each rows and then we have to print the index row of the sum is greater

#include <iostream>
using namespace std;

int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12},maxi=INT16_MIN,index;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
        sum+=arr[i][j];    
        }
        if(sum>maxi){
        maxi=sum;
        index=i;
        }
    }
    cout<<"Row "<<index<<" has the largest sum "<<maxi;
    return 0;
}