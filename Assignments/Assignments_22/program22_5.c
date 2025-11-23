/*
    Algorithm
        START
            Accept N.
            Accept number NO.
            Allocate memory for N integers.
            Accept N elements from user.
            Initialize Count = 0
            For i = 0 to N-1
                If Arr[i] == NO
                        Count++
            Display Count.
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
//  Description     :  N numbers from user and accept one another 
//                     number as NO , return frequency of NO form it.   
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is: %d\n", iValue, iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter the number: 66
// Enter 6 elements:
// Enter element 1: 85
// Enter element 2: 66
// Enter element 3: 3
// Enter element 4: 66
// Enter element 5: 93
// Enter element 6: 88
// Frequency of 66 is: 2
//
/////////////////////////////////////////////////////////////////////