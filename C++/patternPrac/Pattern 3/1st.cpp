/*   1
    21
   321
  4321
 54321 */

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows to be printed: ";
  cin>>n;
  for(int rows=1;rows<=n;rows++){
    for(int space=1;space<=n-rows;space++) cout<<"  ";
    for(int num=rows;num<=1;rows--) cout<<num<<" ";
    cout<<endl;
  }
}