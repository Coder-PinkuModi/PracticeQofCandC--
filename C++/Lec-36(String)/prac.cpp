// to check whether in this type of taking characters in array- they can store space as seperate character

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[12];
    cout << "Enter the characters one by one" << endl;
    for (int i = 0; i < 11; i++)
    {
        cin >> str[i];
    }

    str[7]='\0'; //just an experiment should check out the result of this file

    // str[10] = '\0'; // system automatically adds it to inside the array, always remember to take one extra space in the array and also leave the last index of the array for the null character !

    cout << endl;

    for (int i = 0; i < 11; i++)
    {
        cout << str[i];
    }

    // OR
    cout<<endl;

    cout<<str; //this will also print the str character array

    return 0;
}