/*n=5
*********  
 *******
  *****
   ***
    *     */

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the number of rows to be printed: ";
 cin>>n;
 for(int rows=1;rows<=n;rows++){ // for the rows iteration
    for(int col=1;col<=rows-1;col++) cout<<"  "; //for spaces 
    for(int col=1;col<=(n-rows)*2+1;col++) cout<<"* ";

    cout<<endl;
 }
}