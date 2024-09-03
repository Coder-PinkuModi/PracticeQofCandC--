#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and columns of matrix: ";
    cin>>r;
    cin>>c;
    vector<vector<int> >matrix(r,vector<int>(c));
    cout<<"Enter the data of the matrix: "<<endl;
    for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)
      cin>>matrix[i][j];

    // code to reverse the columns of the matrix
    for (int i = 0; i <= c; i++) {
        int start=0,end=r-1;
        while(start<=end){
            swap(matrix[start][i],matrix[end][i]);
            start++;end--;
        }
    }

    // printing the matrix after operated
    cout<<"Matrix after reversed: "<<endl;
     for(int i=0;i<r;i++){
     for(int j=0;j<c;j++)
      cout<<matrix[i][j]<<" ";
      cout<<endl;
     }
    return 0;
}