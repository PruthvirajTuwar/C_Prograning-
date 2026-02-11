/*
    Algorithm
        Start
            If row is odd → print alphabet
            If row even → print numbers
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
//  Date            : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            char ch = 'a';
            for(int j = 1; j <= iCol; j++, ch++)
                printf("%c ", ch);
        }
        else
        {
            for(int j = 1; j <= iCol; j++)
                printf("%d ", j);
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
// Enter number of rows and columns : 5
// 5
// a b c d e
// 1 2 3 4 5
// a b c d e
// 1 2 3 4 5
// a b c d e
//
///////////////////////////////////////////////////////////////