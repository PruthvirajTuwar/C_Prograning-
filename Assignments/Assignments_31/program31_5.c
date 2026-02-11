/*
    Algorithm
        Start
            Read iRow, iCol.
            For i from 1 to iRow:
                For k from 1 to i-1: print a tab (this creates the left offset).
                For num from i to iCol:
                    Print num (followed by a tab).
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
//  Output          : int
//  Author          : Akshay Ashok Rajale
//  Date            : 22/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
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
// 1       2       3       4
// 2       3       4
// 3       4
// 4
//
///////////////////////////////////////////////////////////////