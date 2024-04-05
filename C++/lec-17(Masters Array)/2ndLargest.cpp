//Q: FInd the second largest number in the array given by the user

#include<iostream>
#include<limits>
using namespace std;

//Function finding 2nd largest in the given array
int secondLar(int arr[],int n)
{
    //First we have to find the first largest number 
    int larNum=arr[0],secondLarNum=numeric_limits<int>::min();
    for(int i=0;i<n;i++){
        if(arr[i]>larNum) larNum=arr[i];
    } 

    // Now finding second largest number
    for(int i=0;i<n;i++){
        if(arr[i]>secondLarNum && arr[i]!=larNum){secondLarNum=arr[i];} 
    }
    return secondLarNum;
}

// Function taking inputs by the user in the given array
void inputArray(int arr[],int n)

{
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    int n,secondLargestNumber; // this will be the size of the given array
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n]; // Array Declaration
    //Function taking input in the array by the help of the function
    inputArray(arr,n);

    //Function finding the second largest in the array
    secondLargestNumber=secondLar(arr,n);
    cout<<"The second largest number is:"<<secondLargestNumber;
    return 0;
}