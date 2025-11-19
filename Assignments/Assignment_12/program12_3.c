// Sum of all factors of a number

#include <stdio.h>

int sum_of_factors(int number)
{
    int sum = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int result = sum_of_factors(number);
    if (result != 0)
        printf("Sum of factors: %d\n", result);

    return 0;
}

//////////////////////////////////////////
//
// Enter number: 21
// Sum of factors: 32
//
//////////////////////////////////////////