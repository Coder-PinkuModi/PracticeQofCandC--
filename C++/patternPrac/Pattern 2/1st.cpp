/*1
  1 2
  1 2 3
  1 2 3 4 
  1 2 3 4 5 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows to be printed: ";
    cin>>n;
    for(int rows=1;rows<=n;rows++){
        for(int col=1;col<=rows;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}