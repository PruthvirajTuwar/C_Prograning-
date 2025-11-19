// Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
            iEvenFact = iEvenFact * i;
        else
            iOddFact = iOddFact * i;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}

/////////////////////////////////////////////////////
//
// Enter number: 11
// Factorial difference is -6555
//
/////////////////////////////////////////////////////