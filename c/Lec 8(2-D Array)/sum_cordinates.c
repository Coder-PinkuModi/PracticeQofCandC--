//Q: Given a matrix 'a' of dimension n*m and 2 coorsdinartes (l1,r1) and (l2,r2). Return the sum of the recrangle from  (l1,r1) and (l2,r2).
#include<stdio.h>
void main()
{
    int r,c,rcount=1,l1,r1,l2,r2,sum=0;
    printf("Enter the Rows of the array :");
    scanf("%d",&r);
    printf("Enter the Columns of the array :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){ // to take the data by the user of array
        printf("Enter the data of Row- %d: ",rcount);
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        rcount++;
    }
    printf("Enter the Coordinates from where we start to sum the array:");
    scanf("%d %d",&l1, &r1);
    printf("Enter the Coordinates from where we start to sum the array :");
    scanf("%d %d",&l2, &r2);
    // now loops to summ of the element
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of Rectangle is: %d",sum);
}