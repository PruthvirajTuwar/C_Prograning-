// Write a program which accept two numbers and check whether numbers are equal or not. 

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    return (iNo1 == iNo2);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}

////////////////////////////////////////
//
// Please enter two numbers: 10 10
// Equal
//
// Please enter two numbers: 10 11
// Not Equal
//
////////////////////////////////////////