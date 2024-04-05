// Q: Given an integer num, repeatedly add all the digits until the result has only one digit, and return it
#include <iostream>
// function addDigits which will make the integer numbers containing digits to a single digit
int addDigits(int num)
{
    int ans = 0, rem;
    //Continue the process until the numbr is a single digit
    while (num > 9)
    {
        // Extract each digit and add it tp the result
        while (num != 0)
        {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        //Update the number for the next iteration
        num=ans;
        ans=0;
    }
    // return the final single-digit result
    return num;
}

// main to take input by the user, pass it to the function addDigits and then print it on console after getting the reult in ans variable
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = addDigits(n);
    cout << ans;
}