/*n=4
    *    
   ***   
  ***** 
 *******  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows to be printed";
    cin>>n;
    for(int i=1;i<=n;i++){// to print or iterate for rows
        for(int j=1;j<=n-i;j++) cout<<" "; // to print the spaces
        for(int j=1;j<=i*2-1;j++) cout<<"*"; // to print *
    
    cout<<endl;
    }
    
}