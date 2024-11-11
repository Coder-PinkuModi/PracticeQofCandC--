// longest prefix - siffix, in question given you can't take the substring containing all the element of the string
// you have to find the length of the longest substring of which prefix and suffix match with each other

#include<iostream>
#include<math.h>
using namespace std;

 int main()
{
    // naive or brute force approach
    string str,prefix="",suffix="";
    cout<<"Enter the word to find the length of longest prefix suffix:"<<endl;
    getline(cin,str);
    int ans= 0;
    for(int i=0;i<str.length();i++)
    {
        int count1=0,count2=str.size()-i-1;
        while(count1<=i){
            prefix+=str[count1];
            count1++;
        }
        while(count2<str.size()){
            suffix+=str[count2];
            count2++;
        }

        if(prefix==suffix){
            ans=max(ans,i+1);
        }
        prefix="";
        suffix="";
    }

    cout<<ans;
    return 0;
}