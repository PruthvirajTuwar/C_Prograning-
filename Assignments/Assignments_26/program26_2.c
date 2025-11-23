/*
    Algorithm
        Start
            Accept integer iNo
            Loop from i = iNo down to 1: print i and '#'
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
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 20/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    for (int i = iNo; i >= 1; i--)
    {
        printf("%d # ", i);
    }
    printf("\n");
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
// Enter number of elements : 5
// 5 # 4 # 3 # 2 # 1 #
//
///////////////////////////////////////////////////////////////