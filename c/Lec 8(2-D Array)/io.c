// In this programme we are going to take user input of the array and then print them
#include<stdio.h>
int main()
{
    int r,c,rcount=1;
    printf("Enter the Rows of the array :");
    scanf("%d",&r);
    printf("Enter the Columns of the array :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        printf("Enter the data of Row- %d: ",rcount);
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        rcount++;
    }
    printf("Array is :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}