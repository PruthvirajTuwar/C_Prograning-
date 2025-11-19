/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Initialize a counter frequency to 0
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is between 3 and 7
                Increment frequency by 1
            Divide number by 10 to remove last digit
        End loop
        Display frequency
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
//  Function Name   : CountRange
//  Description     : It is used to count digits in given number between 3 and 7
//  Input           : int
//  Output          : int
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountRange(int iNo)                                              // Input
{
    int iDigit = 0;
    int iFreq = 0;                                                

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                               
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         
        
        if(iDigit > 3 && iDigit < 7 )                                            
        {
            iFreq++;
        }
        iNo = iNo / 10;                                            
    }

    return iFreq;                                                  
}   // End of CountRange

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

    iRet = CountRange(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395        Output : 1
//  Input : -1018       Output : 0
//  Input : 4246        Output : 3
// 
/////////////////////////////////////////////////////////////////////
