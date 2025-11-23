/*
    Algorithm
        Start
            Accept iNo
            Loop i = 1 to iNo: print i and *
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
        printf("%d  *  ", i);
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
// 1  *  2  *  3  *  4  *  5  *
//
///////////////////////////////////////////////////////////////