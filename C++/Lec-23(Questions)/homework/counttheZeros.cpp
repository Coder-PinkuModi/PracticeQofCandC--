// Q: Given an array Arr of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Example 1:

// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.

// Example 2:

// Input:
// N = 5
// Arr[] = {0, 0, 0, 0, 0}
// Output: 5
// Explanation: There are 5 0's in the array.

// Code:
#include <iostream>
using namespace std;

int countZeroes(int arr[], int n)
{
    int start = 0, end = n - 1, ans = n, mid;
    if (arr[start] == 0 && arr[end] == 0)
    {
        ans = end - start + 1;
        return ans;
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return n - ans;
}

int main()
{
    int n;
    cout << "Enter total number of data: ";
    cin >> n;
    char arr[n];
    cout << "Enter data in array: ";
    for (int initial = 0; initial < n; initial++)
    {
        cin >> arr[initial];
    }
    cout<<countZeroes(arr,n);
    return 0;
}