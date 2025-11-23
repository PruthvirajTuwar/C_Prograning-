/*
    Algorithm
        START

            Accept the value of N.
            Allocate memory for N integers.
            Accept N elements from the user.
            Initialize Flag = FALSE.
            For i = 0 to N-1
                If Arr[i] == 11
                    Set Flag = TRUE
                    Break loop
                If Flag is TRUE
                    Print "11 is present"
                Else
                    Print "11 is absent"
            Free allocated memory.

        STOP
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
//  Description     : N numbers from user check whether that numbers 
//                    contains 11 in it or not.   
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == TRUE)
        printf("11 is present\n");
    else
        printf("11 is absent\n");

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter 6 elements:
// Enter element 1: 85
// Enter element 2: 66
// Enter element 3: 11
// Enter element 4: 80
// Enter element 5: 93
// Enter element 6: 88
// 11 is present
//
/////////////////////////////////////////////////////////////////////