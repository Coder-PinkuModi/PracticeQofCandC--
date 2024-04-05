#include<stdio.h>
void main(){
    int r,c,rcount=1,rcount2=1;
    printf("Enter the number of rows for both of the martrices : ");
    scanf("%d",&r);
    printf("Enter the number of columns for both of the martrices : ");
    scanf("%d",&c);
    int arr1[r][c],arr2[r][c];
    printf("Enter the data of the first matrices :\n");
        for(int i=0;i<r;i++){
        printf("Enter the data of Row- %d: ",rcount);
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
        rcount++;
    }
        printf("Enter the data of the second matrices :\n");
    
        for(int i=0;i<r;i++){
        printf("Enter the data of Row- %d: ",rcount2);
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
        rcount2++;
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}