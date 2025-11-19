/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Initialize a counter frequency to 0
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is less than 6
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
//  Function Name   : Count 
//  Description     : It is used to count frequency of digit less than 6 in given number
//  Input           : int
//  Output          : int
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int Count(int iNo)                                                 // Input
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
        
        if(iDigit < 6)                                            
        {
            iFreq++;
        }
        iNo = iNo / 10;                                            
    }

    return iFreq;                                                  
}   // End of Count

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

    iRet = Count(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 23495      Output : 1
//  Input : 1018       Output : 0
//  Input : 9000       Output : 0
//  Input : 94434      Output : 3
//  Input : 44444      Output : 5
//  
/////////////////////////////////////////////////////////////////////
