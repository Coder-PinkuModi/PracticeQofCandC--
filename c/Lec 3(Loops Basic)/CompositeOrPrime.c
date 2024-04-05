#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number u want to check :");
    scanf("%d", &no);
    int a = 0;
    for (int i = 2; i <= no - 1; i++)
    {
        if (no % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (no == 1)
    {
        printf("The number is isn't composite nor prime");
    }
    else if (a == 0)
    {
        printf("The number is Prime no");
    }
    else
    {
        printf("The number is Composite no");
    }
}