/*
    Algorithm

        START
            Read the value of N from the user.
            Allocate memory for an array of N integers.
            Read all N numbers from the user and store them into the array.
            Initialise a counter:
                EvenCount = 0
            For each element in the array:
                If (element % 2 == 0)
                Increment EvenCount
            Display the value of EvenCount.
            Free the allocated memory.
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
//  Function Name   : CountEven
//  Description     : N numbers from user and return 
//                    frequency of even numbers. 
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountEven(p, iSize);
    printf("Frequency of even numbers is: %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter 6 elements:
// Enter element 1: 85
// Enter element 2: 66
// Enter element 3: 3
// Enter element 4: 80
// Enter element 5: 93
// Enter element 6: 88
// Frequency of even numbers is: 3
//
/////////////////////////////////////////////////////////////////////////