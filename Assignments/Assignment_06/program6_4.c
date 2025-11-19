// Write a program which accept three numbers and print its multiplication.  

/////////////////////////////////////////////////////////////////////////////
//
// Input :  
// 5   
// Output :  140  
// Input :  
// 5   
// Output :  35  
// Input :  
// 5   
// Output :  5  
// Input :  
// 0   
// Output :  0 
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0) iNo1 = 1;
    if(iNo2 == 0) iNo2 = 1;
    if(iNo3 == 0) iNo3 = 1;

    return iNo1 * iNo2 * iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is: %d", iRet);

    return 0;
}

//////////////////////////////////////////////
//
// Please enter three numbers: 11 21 51
// Multiplication is: 11781
//
//////////////////////////////////////////////