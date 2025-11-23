/*
    Algorithm
        Start
            Accept iNo
            Loop i = 1 to iNo: print 2*i
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
//  Description     : Accept number from user and display below pattern.
//  Input           : int
//  Output          : number or pattern
//  Author          :Pruthviraj Kashinath Tuwar
//  Date            : 20/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        printf("%d ", 2 * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d %d", &iValue);

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Enter number of elements : 8
// 2 4 6 8 10 12 14 16
//
///////////////////////////////////////////////////////////////