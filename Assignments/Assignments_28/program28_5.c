/*
    Algorithm
        Start
            Start number = 1
            For each cell, print number and increment
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
    int num = 1;

    for(i = 1; i <= iRow; i++) // Loop for rows
    {
        for(j = 1; j <= iCol; j++) // Loop for columns
        {
            printf("%d ", num);  
            num++;  
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
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
//
///////////////////////////////////////////////////////////////