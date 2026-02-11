/*
    Algorithm
        Start
            For odd rows → print even numbers
            For even rows → print odd numbers
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
//  Date            : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        int num = (i % 2 == 1) ? 2 : 1;
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d ", num);
            num += 2;
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
// 5
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9
//
///////////////////////////////////////////////////////////////