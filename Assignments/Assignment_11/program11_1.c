// Write a program which accept range from user and display all numbers in between that range.

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////
//
// Enter starting point: 23
// Enter ending point: 30
// 23 24 25 26 27 28 29 30
//
/////////////////////////////////////////////////////