#include <stdio.h>
int main()
{ // Do it with nested if else
    int age_1, age_2, age_3;
    printf("Enter Ram's age :");
    scanf("%d", &age_1);
    printf("Enter Shyam's age :");
    scanf("%d", &age_2);
    printf("Enter Ajay's age :");
    scanf("%d", &age_3);
    if (age_1 < age_2)
    {
        if (age_1 < age_3)
        {
            printf("Ram is the youngest");
        }
        else if (age_1 = age_3)
        {
            printf("Both Ram and Ajay are the youngest than shyam with same age");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    else if (age_2 < age_1)
    {
        if (age_2 < age_3)
        {
            printf("Shyam is the youngest");
        }
        else if (age_2 = age_3)
        {
            printf("Both Shyam and Ajay are the youngest than Ram with same age");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    else
    {
        if (age_1 < age_3)
        {
            printf("Both Ram and Shyam are the youngest than Ajay with same age");
        }
        else if (age_3 < age_1)
        {
            printf("Both Ajay is the youngest of three");
        }
    }

    return 0;
}