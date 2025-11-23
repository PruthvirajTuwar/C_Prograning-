/*
    Algorithm
        Start
            Accept N (number of elements)
            Allocate array dynamically
            Accept N integers from user
            Initialize
                evenSum = 0
                oddSum = 0
            Loop through array
                If number % 2 == 0 → evenSum += number
                Else → oddSum += number
            Compute difference = evenSum − oddSum
            Return difference
        Stop
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
//  Function Name   : Difference
//  Description     : N numbers from user and return difference between summation 
//                    of even elements and summation of odd elements.
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 18/11/2025
//
/////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int evenSum = 0;
    int oddSum = 0;
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            evenSum += Arr[i];
        }
        else
        {
            oddSum += Arr[i];
        }
    }

    return evenSum - oddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter 6 elements:
// Enter element 1: 85
// Enter element 2: 66
// Enter element 3: 3
// Enter element 4: 80
// Enter element 5: 93
// Enter element 6: 88
// Result is: 53
//
/////////////////////////////////////////////////////////////////////