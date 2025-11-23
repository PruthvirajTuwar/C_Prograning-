/*
    Algorithm
        START
            Accept N from user.
            Accept the number NO whose presence we want to check.
            Accept all N array elements from the user.
            For each array element:
                If element == NO
                    return TRUE
            If loop completes, return FALSE.
        END

*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : Check
//  Description     : N numbers from user and accept one another number as NO , 
//                    check whether NO is present or not.    
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to check: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter the number to check: 66
// Enter 6 elements:
// 85
// 66
// 3
// 66
// 93
// 88
// Number is present
//
/////////////////////////////////////////////////////////////////////