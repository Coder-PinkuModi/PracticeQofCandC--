// given a sorted array which is rotated with k times, u have to find the index of the number given by the user in that array

#include <iostream>
using namespace std;
int findNumber(int arr[], int n,int target)
{
    int start = 0, end =n-1, mid, ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] >= arr[start])
        {
            if (target >= arr[start] && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target > arr[mid] && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cout << "Enter the total size of the array: ";
    cin>>n;
    int arr[n];
    cout << "Enter datas of the array:";
    for (int initial = 0; initial < n; initial++)
    {
        cin >> arr[initial];
    }

    cout<<"Enter the number to be searched in the rotated array: ";
    cin>>k;

    int indes=findNumber(arr,n,k); //passing the values in function

    cout<<"The index of the value asked: "<<indes;

    return 0;
}