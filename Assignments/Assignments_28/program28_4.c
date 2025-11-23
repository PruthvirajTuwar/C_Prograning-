/*
    Algorithm
        Start
            Start from iRow down to 1
            For each row, print the row number repeated
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
//  Output          : char
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--) // Loop for rows
    {
        for(j = iCol; j >= 1; j--) // Loop for columns
        {
            if(j != 0) 
            {
                printf("%d ", i); 
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
// 4 4 4 4
// 3 3 3 3
// 2 2 2 2
// 1 1 1 1
//
///////////////////////////////////////////////////////////////