#include<stdio.h>
void main()
{
    int r,c,rcount=1,count=1;
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
    int minc=0,minr=0,maxr=r-1,maxc=c-1;
    while(count<=(r*c) && minr!=maxr+1){
        if (minr%2==0)
        {
            for(int j=0;j<=maxc && count<=(r*c) && minr!=maxr+1;j++){
                printf("%d ",arr[minr][j]);
                count++;
            }
           
        }
        else if(minr%2!=0){
            for(int j=maxc;j>=minc && count<=(r*c) && minr!=maxr+1;j--){
                printf("%d ",arr[minr][j]);
                count++;
            }
        }
        minr++;
        
    }
}