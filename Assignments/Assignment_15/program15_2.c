/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Initialize a counter frequency to 0
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is odd
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
//  Function Name   : CountOdd 
//  Description     : It is used to count odd digits in given number
//  Input           : int
//  Output          : int
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)                                              // Input
{
    int iDigit = 0;
    int iFreqOfOdd = 0;                                                

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                               
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         
        
        if(iDigit % 2 != 0)                                            
        {
            iFreqOfOdd++;
        }
        iNo = iNo / 10;                                            
    }

    return iFreqOfOdd;                                                  
}   // End of CountOdd

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

    iRet = CountOdd(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395        Output : 3
//  Input : -1018       Output : 2
//  Input : 4246        Output : 2
// 
/////////////////////////////////////////////////////////////////////
