/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Initialize a counter frequency to 0
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is even
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
//  Function Name   : CountEven 
//  Description     : It is used to count even digits in given number
//  Input           : int
//  Output          : int
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountEven(int iNo)                                              // Input
{
    int iDigit = 0;
    int iFreqOfEven = 0;                                                

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                               
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         
        
        if(iDigit % 2 == 0)                                            
        {
            iFreqOfEven++;
        }
        iNo = iNo / 10;                                            
    }

    return iFreqOfEven;                                                  
}   // End of CountEven

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

    iRet = CountEven(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 23495      Output : 2
//  Input : 1018       Output : 2
//  Input : -1018      Output : 2
//  Input : 94434      Output : 3
//  Input : 42644      Output : 5
//  
/////////////////////////////////////////////////////////////////////
