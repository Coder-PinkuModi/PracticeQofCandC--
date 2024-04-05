/*A B C D
  A B C
  A B
  A*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int rows=n;rows>=1;rows--){
        for(int col='A';col<='A'+rows-1;col++) cout<<(char)col<<" ";

        cout<<endl;
    }
}