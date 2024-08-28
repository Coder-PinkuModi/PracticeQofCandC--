// there should be given a mtrix which is sorted in decreasing order and a target given, have to return bool value from function if the value is present the matrix
// leetcode--> in ascending order given in the question of the leetcode

#include<iosstream>
#include<vector>
#include<algorithm>

using namespace std;

int findTarget(vector<<vector<int> >matrix,int target){
    int n=matrix.size(),m=matrix[0].size();
    int left=0,right=(m*n)-1;
    while(left<=right){
        int mid=left+right/2;
        int row_index=mid/m;
        int col_index%col;

        if(matrix[row_index][col_index]==target) return 1;
        else if(matrix[row_index][col_index]>target) right=mid-1;
        else left=mid+1;
    }

    return 0;
}

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns of the matrix respectively: ";
    cin>>n;
    cin>>m;
    vector<<vector<int> >matrix(n,vector<int>m);
    cout<<"Enter the marix elements in descending order: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[n][m];
        }
    }
    cout<<"Enter the targer to find in the array: ";
    int target;
    cin>>target;

    int ans=findTarget(matrix,target);
    if(ans==1) cout<<"true";
    else cout<<"false";

    return 0;
}