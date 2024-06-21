// Q : in this we have to get an array and then sort it but not strictly i.e. the sorted array can have repeatation of the same number-- and in this there a number is provided if the number is present in the array then print its index
//  Remember :- if its present more than one time in the array then print its first and last position index of the number

#include <iostream>
#include <algorithm>

using namespace std;

void firstandLast(int arr[], int n, int key)
{
    int keyy1 = -1, keyy2 = -1, mid;
    int start = 0, end = n - 1;

    while (start <= end)
    {
        // loop for first position
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            keyy1 = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    while (start <= end)
    {
        // loop for last position
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            keyy2 = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "First and last position is : " << keyy1 << " and " << keyy2;
}

void bubblesort(int arr[], int n)
{ // sorting of an array
    for (int initial = 1; initial < n; initial++)
    {
        bool flag = false;
        for (int initial2 = 1; initial2 < n - initial + 1; initial2++)
        {
            if (arr[initial2] < arr[initial2 - 1])
            {
                swap(arr[initial2], arr[initial2 - 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}

int main()
{
    int n, key;
    cout << "Enter total data of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the data's of array :" << endl;
    for (int initial = 0; initial < n; initial++)
    {
        cin >> arr[initial];
    }

    bubblesort(arr, n);

    cout << "Enter the key of the position to find: ";
    cin >> key;
    cout << endl;

    for (int initial = 0; initial < n; initial++)
    { // printing of sorted array is for debugging purpose
        cout << arr[initial] << " ";
    }

    cout << endl;

    firstandLast(arr, n, key);
    return 0;
}