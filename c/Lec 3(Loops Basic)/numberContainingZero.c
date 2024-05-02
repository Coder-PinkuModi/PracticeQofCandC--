// Q: In this Q u have to code numbers till n and find how many number contain zero in it(doesn't matter how many zeros an integer would have only zero should be present in it)

#include <stdio.h>
void main()
{
    int endNumber, count = 0;
    printf("Enter the number till loop to be executed : ");
        scanf("%d", & endNumber);
    for (int initial = 1; initial <= endNumber; initial++)
    { // Loop for counting till number endNumber

        int currentNumber = initial;

        while (currentNumber != 0)
        { // this loop will loop all the initial numbers and check whether there is zero is present or not and when it finds it then bresk the loop!

            int endDigit = currentNumber % 10;

            currentNumber = currentNumber / 10;

            if (endDigit == 0)
            {
                count++;
                break;
            }
        }
    }
    printf("The total number contain zeros in it till n-number is : %d",count);
}