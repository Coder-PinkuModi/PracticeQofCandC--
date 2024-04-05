#include<stdio.h>
int main()
{
    int no,nsp;
    printf("Enter the number of rows to be printed :");
    scanf("%d",&no);
    int nst=1;
    int ml=nsp=(no/2)+1;
    for(int i=1;i<=no;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}