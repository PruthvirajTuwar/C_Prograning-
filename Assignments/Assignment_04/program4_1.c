// Write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factor is: %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////
//
// Enter Number: 12
// Multiplication of factor is: 144    (1 * 2 * 3 * 4 * 6)
//
// Enter Number: 13
// Multiplication of factor is: 1      ( 1 )
//
// Enter Number: 10
// Multiplication of factor is: 10     (1 * 2 * 5)
//
/////////////////////////////////////////////////////////