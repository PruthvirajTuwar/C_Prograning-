// Write a program to find even factorial of given number.  

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 2; i <= iNo; i += 2)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}

////////////////////////////////////////////////
//
// Enter number: 11
// Even Factorial of number is 3840
//
////////////////////////////////////////////////