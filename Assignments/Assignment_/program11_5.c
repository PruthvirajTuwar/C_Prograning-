// Write a program which accept accept range from user and display all numbers in between that range in reverse order. 

#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iEnd; i >= iStart; i--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////
//
// Enter starting point: 23
// Enter ending point: 30
// 30 29 28 27 26 25 24 23
//
//////////////////////////////////////////