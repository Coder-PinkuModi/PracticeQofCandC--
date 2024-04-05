#include<iostream>
using namespace std;

int main(){
    int inn,outt; // inn will be the number of times loop will be initiated and outt will be the output as pattern printed
    cout<<"Enter number of times loop to be printed";
    cin>> inn;
    cout<<"Enter the integer to be printed";
    cin>> outt;
    for(int i=1;i<=inn;i++)
    {
        for(int j=1;j<=inn;j++){
            cout<<outt<<" ";
        }
        cout<<endl; 
    }
}