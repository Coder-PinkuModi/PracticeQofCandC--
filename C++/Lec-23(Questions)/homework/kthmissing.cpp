// Q:Kth Missing Positive Number
/*Description:Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.



Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 */

#include <iostream>
#include <algorithm>
using namespace std;
// My soltuon:
/*
int findKthPositive(int arr[],int n, int k)
{
    int miss[k + 1], count = 0, flag = 0;
    for (int i = 1; i <= n + k; i++)
    {
        if (count < k+1)
        {
            for (int j = 0; j <n; j++)
            {
                if (i == arr[j])
                    flag = 1;
            }
            if (flag == 0)
            {
                miss[count] = i;
                count++;
            }
            flag = 0;
        }
    }
    return miss[k - 1];
}
*/

// chatgpt solution after optiomization:
/*
int findKthPositive(int arr,int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }

    return -1; // In case something goes wrong
}

*/

int findKthPositive(int arr, n, int k)
{ // o(log n)--. most optimized
    // Binary search for optimal solution
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = arr[mid] - (mid + 1);

        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low + k;
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
    cout << "Enter the missing number position: ";
    int k;
    cin >> k;
    cout << findKthPositive(arr, n, k);
    return 0;
}