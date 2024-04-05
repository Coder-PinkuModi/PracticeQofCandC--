#include<stdio.h>
void main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("Pairs are:\n");
    int x=12,count=0; //means all the triplets should form sum to X
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            for(int k=j+1;k<8;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x) {
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                count++;
                }      
            }
        }
    }
    printf("Total pairs are: %d",count);
}