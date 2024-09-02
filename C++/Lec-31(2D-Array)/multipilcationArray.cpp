// in these we will take two matrices and then multiply them--> we are going to do this with vector as everything will be user input

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
    if(c1!=r2){ cout<<"Entered rows and columns doesn't match the rule of multiplication of matrix"; return 0; } // checking if the matrices size is fit for multiplication or not

    vector<vector<int> >matrix1(r1,vector<int>(c1));
    cout<<"Enter the data in the matrix-1: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            cin>>matrix1[i][j];
    }

    vector<vector<int> >matrix2(r2,vector<int>(c2));
    cout<<"Enter the data in the matrix-2: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
            cin>>matrix2[i][j];
    }
    
    vector<vector<int> >matrix3(r1,vector<int>(c2));
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
         int sum = 0;
            for (int count = 0; count < c1; count++) {
                sum += matrix1[i][count] * matrix2[count][j];
            }
            matrix3[i][j]=sum;
        }
    }

    cout<<"Matrix after multiplication:"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            cout<<matrix3[i][j]<<" ";
        cout<<endl;
        }

    
    return 0;
}