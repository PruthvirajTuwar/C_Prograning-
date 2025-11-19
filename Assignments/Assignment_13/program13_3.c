// Print all odd numbers up to N

#include <stdio.h>

void print_odd_numbers(int limit)
{
    if (limit <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}

////////////////////////////////////////////
//
// Enter number: 10
// 1 3 5 7 9
//
////////////////////////////////////////////