/*
    Algorithm
        Start
            For row i → start number = i
            Print i, i+1, i+2…
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
        int num = i;
        for(int j = 1; j <= iCol; j++)
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
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7
//
///////////////////////////////////////////////////////////////