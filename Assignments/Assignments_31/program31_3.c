/*
    Algorithm
        Start
            Read iRow, iCol.
            For i from 1 to iRow (inclusive):
                For j from 1 to iCol:
                    If i == j: print "$" (tab).
                    Else if j < i: print "#" (tab).
                    Else: print "*" (tab).
                Print newline.
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
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == j)
            {
                printf("$\t");
            }
            else if (j < i)
            {
                printf("#\t");
            } 
            else
            {
                printf("*\t");
            } 
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
// $       *       *       *
// #       $       *       *
// #       #       $       *
// #       #       #       $
//
///////////////////////////////////////////////////////////////