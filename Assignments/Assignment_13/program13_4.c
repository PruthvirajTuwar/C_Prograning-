// Find sum of first N natural numbers

#include <stdio.h>

int sum_natural_numbers(int limit)
{
    int sum = 0;

    if (limit <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= limit; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    int result = sum_natural_numbers(limit);
    if (result != 0)
        printf("Sum of first %d natural numbers: %d\n", limit, result);

    return 0;
}

////////////////////////////////////////////
//
// Enter number: 10
// Sum of first 10 natural numbers: 55
//
////////////////////////////////////////////