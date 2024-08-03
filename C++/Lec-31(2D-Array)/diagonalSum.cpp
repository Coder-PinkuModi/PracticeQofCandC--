// in these we have to find the sum of the diagonals of both side of the 2D-Array who row==column

#include <iostream>
using namespace std;

int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},diagonal1=0,diagonal2=0;

    // for the sum of first diagonal
    for(int i=0;i<4;i++){
        diagonal1+=arr[i][i];
    }
    cout<<"Diagonal 1 sum: "<<diagonal1<<endl;

    for(int i=0, j=3;j>=0;i++,j--){
        diagonal2+=arr[i][j];
    }

    cout<<"Diagonal 2 sum: "<<diagonal2;

    return 0;
}