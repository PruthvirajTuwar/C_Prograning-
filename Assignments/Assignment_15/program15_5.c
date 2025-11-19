/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take two variables EvenSum and OddSum 
        Repeat until number becomes 0
            Extract last digit using modulus operator
            If digit is even
                Add it to EvenSum
            Otherwise
                Add it to OddSum
            Divide number by 10 to remove last digit
        End loop
        Calculate difference as (EvenSum - OddSum)
        Display the difference
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
//  Function Name   : CountDiff
//  Description     : It is used to calculate difference between summation of even 
//                    and odd digits in a given number
//  Input           : int
//  Output          : int
//  Author          :Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)                                              // Input
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                               
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         

        if(iDigit % 2 == 0)                                        
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else                                                       
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;                                            
    }

    return (iEvenSum - iOddSum);                                   
}   // End of CountDiff

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

    iRet = CountDiff(iValue);                                      // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395       Output : -15   
//  Input : 1018       Output : 6     
//  Input : 8440       Output : 16    
//  Input : 5733       Output : -18   
//  
/////////////////////////////////////////////////////////////////////
