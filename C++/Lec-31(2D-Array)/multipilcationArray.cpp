// in these we will take two matrices and then multiply them--> we are going to do this with vector as everything will be user input
// YET TO COMPLETE

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int r1,c1,r2,c2;

    cout<<"Enter the rows and columns of the matrix1 respectively: ";
    cin>>r1;
    cin>>c1;
    cout<<"Enter the rows and columns of the matrix2 respectively: ";
    cin>>r2;
    cin>>c2;
    if(c1!=r2) return 0; // checking if the matrices size is fit for multiplication or not

    vector<vector<int> >matrix1(r1,vector<int>(c1));
    cout<<"Enter the data in the matrix row major order: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            cin>>matrix1[i][j];
    }

    vector<vector<int> >matrix2(r2,vector<int>(c2));
    cout<<"Enter the data in the matrix row major order: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
            cin>>matrix2[i][j];
    }
    

    vector<vector<int> >matrix3(r1,vector<int>(c2));
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            matrix3 = 
    }

    
    return 0;
}