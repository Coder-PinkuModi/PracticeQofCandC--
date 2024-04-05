#include<stdio.h>// multipilication of two array
void arrdata(int r,int c,int arr[r][c]){ // to take the data of the array
    int rcount=1;
    for(int i=0;i<r;i++){
        printf("Enter the data of Row- %d: ",rcount);
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        rcount++;
    }
}
void main(){
      int r1,c1;
    printf("Enter the Rows of the first array :");
    scanf("%d",&r1);
    printf("Enter the Columns of the first array :");
    scanf("%d",&c1);
    int arr1[r1][c1];
    arrdata(r1,c1,arr1);
     int r2,c2;
    printf("Enter the Rows of the second array :");
    scanf("%d",&r2);
    printf("Enter the Columns of the second array :");
    scanf("%d",&c2);
    int arr2[r2][c2];
    arrdata(r2,c2,arr2);
    int res[r1][c2]; // in this we are going to store the resultant data
    // Now code for multiplication start
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            res[i][j]=0;
            for(int k=0;k<r2;k++)
            {
                // i row of arr1, j column of arr2
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Array after multiplication is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
