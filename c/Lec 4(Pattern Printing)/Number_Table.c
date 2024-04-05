#include <stdio.h>
int main()
{ // this code is done by making new variables
    int n;
    printf("Enter the number or rows to be printed :");
    scanf("%d", &n);
    int nsp = 1;
    int no =n-1;
    int o=n+1;
     int g=n+1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= 2 * n -1; j++)
            printf("%d",j);
        }
        else if (i > 1)
        {
            for (int j = 1; j <= no; j++)
            {
                printf("%d",j);
            }   
            for (int k = 1; k <= nsp; k++)
            {
                printf(" ");
            }

            for (int m =1; m <= no; m++)
            {
                printf("%d",g);
                g++;
            }
            o++;
            g=o;
            nsp += 2;
            no--;
        }
        printf("\n");
    }
    return 0;
}