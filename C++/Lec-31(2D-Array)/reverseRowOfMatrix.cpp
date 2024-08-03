// in these we have to reverse each row of the matrix

#include<iostream>
using namespace std;

int main(){
    int arr[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for(int i=0;i<5;i++){
        int start=0,end=2;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;end--;
        }
    }

    //printing the reverse array
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}