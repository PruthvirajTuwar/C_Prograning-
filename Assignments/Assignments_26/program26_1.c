/*
    Algorithm
        Start
            Accept integer iNo
            Set ch = 'A'
            Loop i = 1 to iNo: print ch, increment ch
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
//  Output          : char
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 20/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    char ch = 'A';

    for(int i = 0; i < iNo; i++, ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    if (scanf("%d", &iValue) != 1) return 0;

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////
//
// Enter number of elements : 5
// A       B       C       D       E
//
///////////////////////////////////////////////////////////////