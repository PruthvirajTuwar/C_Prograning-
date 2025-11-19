/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is equal to 0
                Then display message that number contains 0
                Stop the loop
            Divide number by 10 to remove last digit
        End loop
        If no digit was 0
            Display message that number does not contain 0
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkZero  
//  Description     : It is used to check whether a given number contains 0 or not
//  Input           : int
//  Output          : bool
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)                                               // Input
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                                                // Convert negative to positive
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         // Extract last digit
        
        if(iDigit == 0)                                            
        {
            return true;                                           
        }
        iNo = iNo / 10;                                            
    }
    return false;                                                 
}   // End of ChkZero

// Time complexity : O(N) 

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input
    bool bRet = false;                                             // To store result

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);                                        // Function call

    if(bRet == true)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395       Output : There is no Zero
//  Input : 1018       Output : It contains Zero
//  Input : 9000       Output : It contains Zero
//  Input : 8452       Output : There is no Zero
//  
/////////////////////////////////////////////////////////////////////
