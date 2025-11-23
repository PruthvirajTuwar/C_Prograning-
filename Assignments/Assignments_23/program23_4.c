/*
    Algorithm
        START
            Accept N, Start, End.
            Accept array elements.
            For each element:
                If element >= Start AND element <= End
                    Print element
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
//  Function Name   : Range
//  Description     : N numbers from user and accept Range, Display 
//                    all elements from that range    
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter start of range: ");
    scanf("%d", &iStart);

    printf("Enter end of range: ");
    scanf("%d", &iEnd);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter start of range: 60
// Enter end of range: 90
// 85
// 66
// 3
// 76
// 93
// 88
//
// Output: 66 76 88
//
/////////////////////////////////////////////////////////////////////