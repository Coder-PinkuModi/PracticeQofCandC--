// Q: in this there will given user defined data in an array and then u have to sort it in ascending and descending order 

// YET To COMPLETE

#include <iostream>
#include<climits> //header files to inject maximum or minimum number of integer datatype


using namespace std;

void descending(int arr[],int number){
//method we use is called selection sorting

  for (int i = 0; i < number - 1; i++) //loop upto iteration number-1 as if we arrange till then last index will automatically be placed right
  {
    int minIndex=i;
    for (int iteration = i; iteration < number; iteration++) //loop for finding minNum
    {
      if (arr[iteration] > arr[minIndex]) 
      {
        minIndex=iteration;
      }
    }
    //swapping
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    
  }
}

void ascending(int arr[], int number)
{
  //method we use is called selection sorting
  int minNum = INT_MAX, minindex;

  for (int i = 0; i < number - 1; i++) //loop upto iteration number-1 as if we arrange till then last index will automatically be placed right
  {
    for (int iteration = i; iteration < number; iteration++) //loop for finding minNum
    {
      if (minNum > arr[iteration]) 
      {
        minNum = arr[iteration];
        minindex = iteration;
      }
    }
    //swapping
      int temp = arr[i];
      arr[i] = arr[minindex];
      arr[minindex] = temp;
    
    minNum=INT_MAX; //method to initialise minNum = maximum number available in int datatype
  }
}

int main()
{
  int number;
  cout << "Enter the total number u want to add in array: ";
  cin >> number;
  int arr[number];

  cout << "Enter data of the array: ";
  for (int initial = 0; initial < number; initial++)
  {
    cin >> arr[initial];
  }

  ascending(arr, number); // calling function ascending order which will arrange the array in ascending and then print it
  cout<<"Ascending number is: ";

  for (int initial = 0; initial < number; initial++) //printing the sorted array
  {
    cout << arr[initial] << " ";
  }

  cout<<endl;

  descending(arr, number); 
  // descending(arr,number); // calling descending order function which will arrange the array in descending and then print it

  cout<<"Descending number is: ";
    for (int initial = 0; initial < number; initial++) //printing the sorted array
  {
    cout << arr[initial] << " ";
  }
  return 0;
}