/*
    Algorithm
        Start
            Accept rows & columns
            If row is odd → uppercase
            If row is even → lowercase
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
    char ch1 = 'A';
    char ch2 = 'a';

    for(i = 0; i <= iRow; i++) // Loop for rows
    {
        for(j = 0; j <= iCol; j++) // Loop for columns
        {
            if(i % 2 == 0) 
            {
                printf("%c ", ch1 + j); 
            }
            else 
            {
                printf("%c ", ch2 + j); 
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
// A B C D
// a b c d
// A B C D
// a b c d
//
///////////////////////////////////////////////////////////////