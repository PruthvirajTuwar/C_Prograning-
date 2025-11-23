/*
    Algorithm

        START

            Accept the value of N.
            Allocate memory for N integers.
            Accept N elements from the user.
            Initialize:
                EvenCount = 0
                OddCount = 0
            For i = 0 to N-1
                If Arr[i] % 2 == 0
                    EvenCount++
                Else
                    OddCount++
            Calculate Diff = EvenCount – OddCount
            Display Diff.
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
//  Function Name   : Frequency
//  Description     : N numbers from user and return difference between 
//                    frequency of even number and odd numbers.  
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, Even = 0, Odd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    return Even - Odd;
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
    printf("Difference is: %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 7
// Enter 7 elements:
// Enter element 1: 85
// Enter element 2: 66
// Enter element 3: 3
// Enter element 4: 80
// Enter element 5: 93
// Enter element 6: 88
// Enter element 7: 90
// Difference is: 1
//
/////////////////////////////////////////////////////////////////////