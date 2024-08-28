#include <iostream>
#include <algorithm>
using namespace std;

void printPattern(int n)
{
    int mini;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            int left = j, right = (n*2-2)-j, top = i, down = (n*2-2)-i;
            int mini = min(min(left, right), min(top, down));
            cout << n-mini << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number n to print the special pattern: ";
    cin >> n;
    printPattern(n);
    return 0;
}