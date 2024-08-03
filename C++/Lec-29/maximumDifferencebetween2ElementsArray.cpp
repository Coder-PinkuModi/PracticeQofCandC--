// in this we have to find the maximum difference between two elements such that larger element appers after the smallest element

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumDifferenceFunction2(vector<int>arr){
    // this approac has time complextiy of O(n)
 int min_element = arr[0];
     for(int i = 1; i < arr_size; i++)
     {     
       if (arr[i] - min_element > max_diff)                             
       max_diff = arr[i] - min_element;
        
       if (arr[i] < min_element)
       min_element = arr[i];                     
     }
      
     return max_diff;
}

int maximumDifferenceFunction1(vector<int>arr){
    // this approach have time complexity O(n*n)
    int n=arr.size(),maxi=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi=max(maxi,arr[j]-arr[i]);
        }
        return maxi;
    }

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

    int maxDiff1=maximumDifferenceFunction1(v); // this approach has time complexity of O(n*n)
    cout<<"Maximum difference is: "maxDiff1<<endl;

    // here is the program having same result of time complexity O(n)
    int maxDiff2=maximumDifferenceFunction2(v)
    cout<<maxDiff2;

    return 0;
}