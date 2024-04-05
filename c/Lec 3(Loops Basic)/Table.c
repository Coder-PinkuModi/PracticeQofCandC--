#include<stdio.h>
int main(){
    int no_1, no_2;
    printf("Enter the no of which tsble is to be printed :");
    scanf("%d", &no_1);
    printf("Enter the number till its multiple is to be printed :");
    scanf("%d", & no_2);
    for(int i=1;i<=no_2;i++)
    {
        printf("%d ", i*no_1);
    }
    return 0;
}