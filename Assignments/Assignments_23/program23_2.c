/*
    Algorithm
        START
            Accept N and NO.
            Accept N numbers.
            For each element with index i:
                If Arr[i] == NO
                    return i
            If no match found, return -1.
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
//  Function Name   : FirstOcc
//  Description     :  N numbers from user and accept one another number as NO , 
//                     return index of first occurrence of that NO.   
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
        printf("There is no such number\n");
    else
        printf("First occurrence is at index %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter the number: 66
// Enter 6 elements:
// 85
// 66
// 3
// 66
// 93
// 88
// First occurrence is at index 1
//
/////////////////////////////////////////////////////////////////////