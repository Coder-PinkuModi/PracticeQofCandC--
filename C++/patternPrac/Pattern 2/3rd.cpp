/*10
  10 11
  10 11 12
  10 11 12 13
  10 11 12 13 14
  10 11 12 13 14 15*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows to be printed: ";
    cin>>n;
    for(int rows=1;rows<=n;rows++){
        for(int col=10;col<=10+rows-1;col++) cout<<col<<" ";
    
    cout<<endl;
    }
}