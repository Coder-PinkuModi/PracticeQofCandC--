#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the Cost Price :");
    scanf("%d", &cp);
    printf("Enter the Selling  Price :");
    scanf("%d", &sp);
    if(sp>cp)
    {
        printf("Seller made profit of : %d", sp-cp);
    }
    else if(sp==cp)
    {
        printf("Seller neither book Profit nor Loss");
    }
    else{
        printf("Seller made loss of : %d", cp-sp);
    }
    return 0;
}