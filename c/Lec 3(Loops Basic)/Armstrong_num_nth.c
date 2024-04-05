#include <stdio.h>
int main()
{
    printf("Enter the number till Armstrong number is to be printed :");
    int num_1;
    scanf("%d", &num_1);
    int num_2 = num_1;
    int num_3 = num_1;
    for (int i = 1; i <= num_3; i++)
    {
        int a=0;
        int sum=0;
        while (num_2 != 0)
        {
            num_2 = num_2 / 10;
            ++a;
        }
        for (int j = 1; j <= a; j++)
        {
            int k = num_1 % 10;
            sum = sum + (k*k*k);
            num_1 = num_1 / 10;
        }
        if (sum==i)
            printf("%d,", sum);
    }
    return 0;
}