//YET TO COMPLETE
/*
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.*/

/*Example 1:

Input:
n = 4, arr1[] = [1 3 5 7]
m = 5, arr2[] = [0 2 6 8 9]
Output:
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two
non-decreasing arrays, we get,
0 1 2 3 5 6 7 8 9.
Example 2:

Input:
n = 2, arr1[] = [10 12]
m = 3, arr2[] = [5 18 20]
Output:
arr1[] = [5 10]
arr2[] = [12 18 20]
Explanation:
After merging two sorted arrays
we get 5 10 12 18 20.
Your Task:
You don't need to read input or print anything. You only need to complete the function merge() that takes arr1, arr2, n and m as input parameters and modifies them in-place so that they look like the sorted merged array when concatenated.

Expected Time Complexity:  O((n+m) log(n+m))
Expected Auxilliary Space: O(1)

Constraints:
1 <= n, m <= 105
0 <= arr1i, arr2i <= 107*/

#include <iostream>
#include <climits>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    // YET TO COMPLETE
}

int main()
{
    int n, m;
    cout << "Enter the total size of array 1 and array 2 respectively: ";
    cin >> n;
    cin >> m;
    int count1 = 0, count2 = 0;
    int arr1[n], arr2[m];
    cout << "Enter data of both array consequtively: ";
    for (int initial = 0; initial < m + n; initial++)
    {
        if (initial < n)
            cin >> arr1[initial];
        else
        {
            cin >> arr2[count1];
            count1++;
        }
    }

    merge(arr1, arr2, n, m);

    for (int initial = 0; initial < m + n; initial++)
    {
        if (initial < n)
        {
            cout << arr1[initial] << " ";
        }
        else
        {
            if (initial == n)
                cout << endl;
            cout << arr2[count2] << " ";
            count2++;
        }
    }

    return 0;
}