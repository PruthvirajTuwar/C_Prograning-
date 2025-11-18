// Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;            // Summation of factors
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;      // Summation of non-factors
        }
    }
    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////
//
// Enter Number: 12
// -34    (16 - 50)
//
// Enter Number: 10
// -29    (8 - 37)
//
/////////////////////////////////////////////////////////