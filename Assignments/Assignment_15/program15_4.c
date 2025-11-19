/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Initialize multiplication variable (iMult) to 1
        Repeat until number becomes 0
            Extract last digit using modulus operator
            Multiply iMult with digit
            Divide number by 10 to remove last digit
        End loop
        Display multiplication result
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : MultDigits
//  Description     : It is used to calculate multiplicatin of all digits in given 
//  Input           : int
//  Output          : int
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)                                              // Input
{
    int iDigit = 0;
    int iMult = 1;                                                

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                               
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;                                            
    }

    return iMult;                                                  
}   // End of MultDigits

// Time complexity : O(N) 

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input
    int iRet = 0;                                                  // To store result

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395        Output : 270
//  Input : -1018       Output : 0
//  Input : 4246        Output : 192
// 
/////////////////////////////////////////////////////////////////////
