#include<stdio.h>
int main(){
    int b,n;
    printf("Enter the number or rows to be printed :");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
        int b=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                char ch=(char)b;
                printf("%c ", ch);
                b=b+1;
            }
        }
        printf("\n");
     }
}