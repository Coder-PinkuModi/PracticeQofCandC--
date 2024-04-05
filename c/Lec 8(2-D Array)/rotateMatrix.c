// Q:Wrigte a program to rotate a matrix 90° clockwise.
// to rotate algorithm should be like first transpose the gioven matrix and then rvwerse each row  **Only for square matrix
#include<stdio.h>
void main(){
    int n,rcount=1,temp=0;
    printf("Enter the Rows of the array :");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        printf("Enter the data of Row- %d: ",rcount);
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        rcount++;
    }
     printf("Array is :\n");
    for (int i = 0; i < n; i++)
    { // printing of array before Rotate
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < n; i++)
    { // loop for transpose
        for (int j = i; j < n; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Now after these we have to reverse each row
    for(int i=0;i<n;i++)
    {
        for(int j=0,k=n-1;j<k;j++,k--){
             temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
     printf("Array after rotation is  :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}