/*
    Algorithm
        START
            Accept the value of N.
            Allocate memory.
            Accept N elements.
            Initialize Count = 0
            For i = 0 to N-1
                If Arr[i] == 11
                        Count++
            Display Count.
            Free memory.
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
//  Function Name   : Frequency
//  Description     : N numbers from user and return frequency of 11 form it.   
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11: %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter 6 elements:
// Enter element 1: 85
// Enter element 2: 11
// Enter element 3: 3
// Enter element 4: 15
// Enter element 5: 11
// Enter element 6: 111
// Frequency of 11: 2
//
/////////////////////////////////////////////////////////////////////