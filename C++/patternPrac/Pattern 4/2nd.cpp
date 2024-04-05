/*
    1
   121
  12321
 1234321
123454321   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows to be printed: ";
    cin>>n;
    for(int rows=1;rows<=n;rows++){ // for the rows iteration
        for(int col=1;col<=n-rows;col++) cout<<"  "; // for spaces
        for(int col=1;col<=rows;col++) cout<<col<<" "; // for number till column==n
        for(int col=rows-1;col>=1;col--) cout<<col<<" "; // for number after column==n 
    
    cout<<endl;
    }
    
}