/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Repeat until number becomes 0
            Extract last digit using modulus operator(no % 10)
            Display the digit
            Divide number by 10 to remove last digit
        End loop
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
//  Function Name   : DisplayDigits  
//  Description     : It is used to display all digits of a given number in reverse order
//  Input           : int
//  Output          : void
//  Author          : Tuwar Pruthviraj Kashinath
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)                                        // Input
{
    int iDigit = 0;                                                
    
    if(iNo < 0)                                                    // Updater       
    {
        iNo = -iNo;                                                
    }

    while(iNo != 0)                                                // Business logic
    {
        iDigit = iNo % 10;                                         
        printf("%d\n", iDigit);                                   
        iNo = iNo / 10;                                            
    }    
}   // End of DisplayDigits

// Time complexity : O(N) 

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);                                         // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 7846       Output : 6  
//                              4
//                              8  
//                              7
//
//  Input : 120        Output : 0
//                              2
//                              1
//  
/////////////////////////////////////////////////////////////////////
