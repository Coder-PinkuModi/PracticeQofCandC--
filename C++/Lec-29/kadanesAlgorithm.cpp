// here we are going to find the largest sum contigous subArray of an array
// this solves the question in O(n) -> time complexity
#include <iostream>
#include <vector>
using namespace std;

void sumSubArray(vector<int> arr)
{
    int maxi = INT_MIN, prefix = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        if (prefix > maxi)
            maxi = prefix;
        if (prefix < 0)
            prefix = 0;
    }
    cout<<maxi;
}

int main()
{
    int n;
    cout << "Enter the total length of a vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sumSubArray(v);
    return 0;
}