/*
    Algorithm
        Start
            Read iRow and iCol.
            For each position (i, j):
                If border → print *
                Else if j <= i → print #
                Else → print $
            Continue until all rows are printed.
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
//  Output          : int
//  Author          : Akshay Ashok Rajale
//  Date            : 22/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;
    int iNo1, iNo2;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iNo1 = iCol - i + 1;
            iNo2 = iRow - i;

            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(j == iNo1)
            {
                printf("*\t");
            }
            else if(j <= iNo2)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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
// *       *       *       *       *       *
// *       #       #       #       *       *
// *       #       #       *       $       *
// *       #       *       $       $       *
// *       *       $       $       $       *
// *       *       *       *       *       *
//
///////////////////////////////////////////////////////////////