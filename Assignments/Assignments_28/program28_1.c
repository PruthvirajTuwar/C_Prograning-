/*
    Algorithm
        Start
            Accept rows & columns
            For each row, print letters from A to required columns
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
    char ch = 'A';

    for(int i = 1; i <= iRow; i++,ch++)
    {
        ch = 'A';
        for(int j = 1; j <= iCol; j++,ch++)
        {
            printf("%c ",ch);
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
// A B C D
// A B C D
// A B C D
// A B C D
//
///////////////////////////////////////////////////////////////