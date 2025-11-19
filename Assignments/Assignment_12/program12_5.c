// Check if number is divisible by 5

#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    if (number % 5 == 0)
        return true;
    else
        return false;
}

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (is_divisible_by_five(number))
        printf("Yes, divisible by 5\n");
    else
        printf("No, not divisible by 5\n");

    return 0;
}

//////////////////////////////////////////
//
// Enter number: 110
// Yes, divisible by 5
//
//////////////////////////////////////////