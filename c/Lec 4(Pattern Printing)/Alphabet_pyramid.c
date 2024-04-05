#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows to be printed :");
    scanf("%d", &n);
    int g = 1;
    for (int i = 1; i <= n; i++)
    {
          int a = 65;
        for (int k = 1; k <= n - i; k++){
            printf(" ");}
        for (int j = 1; j <= g; j++)
        {
            printf("%c", a);
            a = a + 1;
        }
        g=g+2;
        printf("\n");
    }
    return 0;
}