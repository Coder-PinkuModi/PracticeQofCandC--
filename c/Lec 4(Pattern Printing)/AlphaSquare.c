#include<stdio.h>
int main(){ // this program is to print the sqaure of alphabets
    int n;
    printf("Enter the rows to be printed :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n;j++)
        {
            char ch=(char)a;
            printf("%c ", ch);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}