// Check Leap Year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);
}

int main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d ", &yr);

    CheckLeapYear(yr);

    return 0;
}

////////////////////////////////////////////////
// 
// Enter year: 2000
// 2004
// 2000 is a Leap Year
//
// Enter year: 1995
// 2004
// 1995 is Not a Leap Year
//
////////////////////////////////////////////////