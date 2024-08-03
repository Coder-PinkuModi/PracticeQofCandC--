#include <iostream>
using namespace std;

int main()
{
    int arr1[3][2]={1,2,3,4,5,6},arr2[3][2]={7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}