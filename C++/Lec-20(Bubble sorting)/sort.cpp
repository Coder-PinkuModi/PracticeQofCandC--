// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

// In Bubble Sort algorithm,

// traverse from left and compare adjacent elements and the higher one is placed at right side.
// In this way, the largest element is moved to the rightmost end at first.
// This process is then continued to find the second largest and place it and so on until the data is sorted.

#include <iostream>

using namespace std;

void decreasingsort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i <= n - 2; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
          
        }
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

void increasingsort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i <= n - 2; i++) //another way of making pattern : for(int i=n-2;i>=0;i++) 
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) // conditional matching of the pattern in loop : for(j=0;j<=i;j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the datas of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    increasingsort(arr, n); // calling increasing sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    decreasingsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}