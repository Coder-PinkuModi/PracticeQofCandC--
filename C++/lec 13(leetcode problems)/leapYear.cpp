// Q: is the given year is a leap year??
// LOGIC: 1.if a year is divisible by 400--> LEAP YEAR,
// LOGIC: 2.if a year is divisible by 4 but not divisible by 100--> LEAP YEAR,
// LOGIC: else-->not a LEAP YEAR,

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}