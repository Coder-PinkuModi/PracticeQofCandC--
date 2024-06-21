/*Insertion sort --> is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

Insertion sort is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.*/


#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;
void decreaseSort(int arr[], int n)
{
    for (int initial = 1; initial < n; initial++)
    {
        bool flag = false;
        for (int initial2 = initial; initial2 > 0; initial2--)
        {
            if (arr[initial2] > arr[initial2 - 1])
            {
                swap(arr[initial2], arr[initial2 - 1]);
                flag=true;
            }
             if (flag == false) break; 
                flag = false;
        }
        flag=false;
    }
}

void increaseSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    { // total rounds
        bool flag = false;
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                flag = true;
            }
            if (flag == false)
                break;    // so that if further checking is not needed then break the loop
            flag = false; // extra precaution in none of the cases, wants computer to run waste loop
        }
        flag = false;
    }
}

int main()
{
    int n;
    cout << "Enter the number to be of data: ";
    cin >> n;
    int arr[n];
    cout << "Enter the datas of the array: \n";
    for (int initial = 0; initial < n; initial++)
    {
        cin >> arr[initial];
    }
    increaseSort(arr, n);
    cout << "Array after ascending sort:\n";
    for (int initial = 0; initial < n; initial++)
    {
        cout << arr[initial] << " ";
    }
    cout << "\n";
    decreaseSort(arr, n);
    cout << "Array after descending sort: " << endl;
    for (int initial = 0; initial < n; initial++)
    {
        cout << arr[initial] << " ";
    }
    return 0;
}