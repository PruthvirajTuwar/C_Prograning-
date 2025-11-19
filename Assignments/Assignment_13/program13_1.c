// Print all numbers from 1 to N

#include <stdio.h>

void print_numbers(int limit)
{
    if (limit <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for (int i = 1; i <= limit; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}

////////////////////////////////////////////
//
// Enter number: 10
// 1 2 3 4 5 6 7 8 9 10
//
////////////////////////////////////////////