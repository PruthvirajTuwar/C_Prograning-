// Write a program to find factorial of given number. 

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1, i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}

///////////////////////////////////////////////
//
// Enter number: 11
// Factorial of number is 39916800
//
///////////////////////////////////////////////