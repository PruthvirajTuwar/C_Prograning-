// Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only) 

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet != 0)
        printf("Addition is %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////
//
// Enter starting point: 23
// Enter ending point: 30
// Addition is 212
//
////////////////////////////////////////////////