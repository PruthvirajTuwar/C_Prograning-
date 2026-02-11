/*
    Algorithm
        Start
            Read iRow, iCol.
            Set i = 1.
            WHILE i <= iRow:
                Compute stars = iCol - i + 1.
                If stars < 0, set stars = 0.
                Set j = 1.
                WHILE j <= stars:
                    Print "*" (tab/space).
                    Increment j.
                Print newline.
                Increment i.
        Stop
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Description     : Accept number of rows and number of columns 
//                    from user and display below pattern.
//  Input           : int
//  Output          : 
//  Author          : Akshay Ashok Rajale
//  Date            : 22/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i  = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        int iNo = iCol - i + 1;

        if (iNo < 0) iNo = 0;
        for (int j = 1; j <= iNo; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Enter number of rows and columns : 4
// 4
// *       *       *       *
// *       *       *
// *       *
// *
//
///////////////////////////////////////////////////////////////