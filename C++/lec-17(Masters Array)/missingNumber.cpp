//Q: here we have to take size of the element and then make an array having size n-1 then put the elements inside and every element should be unique to each other the thing+ the elements should be inside (0>=n) therefore only one mnumber is missing hence find that number 
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter size of the array: ";
    int n,sum=0; 
    cin>>n; 
    int arr[n-1]; //declaration of the array with taking its size
    int sumNaturalNumbers=(n*(n+1))/2; // sum of the n- natural numbers
    int i=0;
    cout<<"Enter the data of the array: ";
    while(i!=n-1){
        cin>>arr[i];
        sum+=arr[i]; // sum of the array
        i++;
    }
    int missingNumber=sumNaturalNumbers-sum; // missing number 
    cout<<"The missing number is : "<<missingNumber;
    return 0;
}

