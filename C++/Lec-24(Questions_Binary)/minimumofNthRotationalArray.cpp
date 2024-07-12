// Q: in this we have to find the minimum number in the either unrotated or rortated arrray by kth time

// Ex- arr[]={2,3,5,7,8,9}, 1st rotational:arr[]={9,2,3,5,7,8}, 2nd rotation: arr[]={8,7,2,3,5}

// Logic is the graph: of frequency of a number vs the elements that is number where if rotated then after a peak of the graph it will down and will not be same as arr[0] in the graph,will always less than arr[0]

#include <iostream>
using namespace std;

void miniNum(int arr[],int n)
{
    int start = 0, mid, end = n-1, ans = arr[0]; // answer is set to arr[0]-->if the number is not rotated then arr[0] will be the minimum number
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start=mid+1;
        }
        else
        {
            
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout << "Minimum number in the given array is :" << ans;
}

int main()
{
    int n;
    cout << "Enter the total size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter datas of the array:";
    for (int initial = 0; initial < n; initial++)
    {
        cin >> arr[initial];
    }
    cout << endl;
    // sort(arr,arr+n);// but we are not going to sort as the array we got from the user should be k-th time rotated from the sorted array

    miniNum(arr,n);
    return 0;
}