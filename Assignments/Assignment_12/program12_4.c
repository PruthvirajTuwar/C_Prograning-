// Sum of even factors (exclude the number itself)

#include <stdio.h>

int sum_of_even_factors(int number)
{
    int sum = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int result = sum_of_even_factors(number);
    if (result != 0)
        printf("Sum of even factors (excluding %d): %d\n", number, result);

    return 0;
}

//////////////////////////////////////////
//
// Enter number: 110
// Sum of even factors (excluding 110): 34
//
//////////////////////////////////////////