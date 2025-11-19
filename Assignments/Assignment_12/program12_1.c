// Print all factors of a number

#include <stdio.h>

void print_factors(int number)
{
    if (number <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}

//////////////////////////////////////
//
// Enter number: 21
// 1 3 7 21
//
//////////////////////////////////////