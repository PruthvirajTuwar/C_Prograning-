/*
    Algorithm
        Start
            Accept rows and columns
            For each column:
             If column is odd → print *
             Else → print #
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
//  Output          : pattern
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 20/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(j % 2 == 1)
                printf("*  ");
            else
                printf("#  ");
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
// Enter number of rows and columns : 3
// 4
// *  #  *  #
// *  #  *  #
// *  #  *  #
//
///////////////////////////////////////////////////////////////