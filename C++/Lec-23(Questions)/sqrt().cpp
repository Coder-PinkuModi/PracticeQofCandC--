//Q: find the square root of a number when time complexity is o(log n), if perfect square is not possible then fine the immediate small integer part of the square root of the number

#include <iostream>
using namespace std;

int sqrtt(int n)
{
     int start = 0,end=n/2,mid,ans;
    if (n > 0)
    {
        if (n <= 3)
            return 1;
        while (start <= end)
        {
            mid=start+(end-start)/2;
            if(mid==n/mid) return mid; // remember: as we are doing DSA we have to think for worst case scenario if we--> think if we have bigger number given then mid*mid==x where mid*mid weill exceed the vakue of integer so, just use incase of that mid==nx/mid
            else if(mid<n/mid) {
                start=mid+1;
                ans=mid;
            }
            else end=mid-1;
        }
    return ans;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number to find it's square root: ";
    cin >> n;
    cout << sqrtt(n); // answer is -1 then not a valid number for square root
    return 0;
}
