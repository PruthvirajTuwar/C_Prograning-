/*
    Algorithm
        Start
            Read integers iRow and iCol.
            Set i = 1.
            WHILE i <= iRow do:
                Set j = 1.  
                WHILE j <= i and j <= iCol do:
                    Print "*" (followed by a tab or space, not newline).
                    Increment j by 1.
                Print newline to move to the next output row.
                Increment i by 1.
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
        for (j = 1; j <= iCol && j <= i; j++)
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
// *
// *       *
// *       *       *
// *       *       *       *
//
///////////////////////////////////////////////////////////////