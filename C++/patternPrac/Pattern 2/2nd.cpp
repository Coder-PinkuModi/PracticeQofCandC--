
/*A
  A B
  A B C
  A B C D
  A B C D E*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows to be printed";
    cin>>n;
    for(int rows=1;rows<=n;rows++)
    {
        for(char col='A';col<='A'+rows-1;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}