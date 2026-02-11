/*
    Algorithm
        Start
            Accept inputs iRow and iCol.
            For each row i from 1 to iRow:
                Compute anti = iCol - i + 1.
                For each column j from 1 to iCol:
                    If j == anti → print #.
                    Else print *.   
                Move to next line.
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
    int i, j, anti;

    for(i = 1; i <= iRow; i++)
    {
        anti = iCol - i + 1;

        for(j = 1; j <= iCol; j++)
        {
            if(j == anti)
                printf("#\t");
            else
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
// *       *       *       #
// *       *       #       *
// *       #       *       *
// #       *       *       *
//
///////////////////////////////////////////////////////////////