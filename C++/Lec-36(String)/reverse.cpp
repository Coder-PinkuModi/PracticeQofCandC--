#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int start = 0, end = str.size() - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << str;
    return 0;
}