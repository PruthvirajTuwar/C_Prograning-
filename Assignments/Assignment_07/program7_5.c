// Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////
//
// Enter number: 11
// 11 22 33 44 55
//
/////////////////////////////////////////////////////////////