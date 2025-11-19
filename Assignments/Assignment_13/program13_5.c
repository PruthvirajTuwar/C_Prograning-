// Find sum of first N even numbers

#include <stdio.h>

int sum_even_numbers(int limit)
{
    int sum = 0;

    if (limit <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    int result = sum_even_numbers(limit);
    if (result != 0)
        printf("Sum of even numbers up to %d is: %d\n", limit, result);

    return 0;
}

////////////////////////////////////////////
//
// Enter number: 10
// Sum of even numbers up to 10 is: 30
//
////////////////////////////////////////////