/*n=4
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter number of rows to be printed: ";
cin>>n;
for(int rows=1;rows<=n;rows++){
    for(int col=1;col<=rows;col++) cout<<"* ";
    for(int col=1;col<=(n*2)-(2*rows);col++) cout<<"  ";
    for(int col=1;col<=rows;col++) cout<<"* ";
    
    cout<<endl;
}
for(int rows=1;rows<=n-1;rows++){
    for(int col=1;col<=n-rows;col++) cout<<"* ";
    for(int col=1;col<=rows*2;col++) cout<<"  ";
    for(int col=1;col<=n-rows;col++) cout<<"* ";

    cout<<endl;
}
}