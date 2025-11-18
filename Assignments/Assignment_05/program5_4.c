// Check Positive, Negative, or Zero

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is Positive\n");
    }
    else if (num < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is Zero\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d ",&number);

    CheckNumberType(number);

    return 0;
}

//////////////////////////////////////////
//
// Enter number: 10
// 11
// Number is Positive
//
// Enter number: -10
// 9
// Number is Negative
//
// Enter number: 0
// 0
// Number is Zero
//
//////////////////////////////////////////