#include<iostream>
using namespace std;

int main(){
    char elem;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
             elem='F'+j;
            cout<<elem<<" ";
        }
        cout<<endl;
    }
}