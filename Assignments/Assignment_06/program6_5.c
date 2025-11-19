// Write a program which accept total marks & obtained marks from user and calculate percentage.

// Input :  
// 1000 
// Output :  74.5%

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if(iTotal == 0)
        return 0.0;

    return ((float)iObtained / (float)iTotal) * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is: %.2f%%", fRet);

    return 0;
}

/////////////////////////////////////////////////
//
// Please enter total marks: 100
// Please enter obtained marks: 50
// Percentage is: 50.00%
//
/////////////////////////////////////////////////