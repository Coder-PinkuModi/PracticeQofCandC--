/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to be printed: ";
    cin >> n;
    for (int rows = 1; rows <= n; rows++)
    { // for upper part row iteration of the pattern
        for (int col = 1; col <= n - rows + 1; col++)
            cout << "* ";
        for (int col = 1; col <= (rows * 2) - 2; col++)
            cout << "  ";
        for (int col = 1; col <= n - rows + 1; col++)
            cout << "* ";

        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    { // for lower part row iteration of the pattern
        for (int col = 1; col <= rows; col++)
            cout << "* ";
        for (int col = 1; col <= (n * 2) - (2 * rows); col++)
            cout << "  ";
        for (int col = 1; col <= rows; col++)
            cout << "* ";

        cout << endl;
    }
}