// Count total factors of a number

#include <stdio.h>

int count_factors(int number)
{
    int count = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int result = count_factors(number);
    if (result != 0)
        printf("Total factors: %d\n", result);

    return 0;
}

////////////////////////////////////////
//
// Enter number: 21
// Total factors: 4
//
////////////////////////////////////////