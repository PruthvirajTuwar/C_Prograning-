/*
    Algorithm
        Start
            Accept total elements N
            Allocate memory dynamically
            Accept N integers from user
            Assume first element is the Minimum
            Traverse full array 
            If current element < Minimum → update Minimum
            After loop ends return Minimum
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
//  Function Name   : Minimum
//  Description     : N numbers from user and return the smallest number.     
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 18/11/2025
//
/////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int i = 0;

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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
        printf("Enter element %d: ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest Number is: %d\n", iRet);

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
// Enter element 4: 66
// Enter element 5: 93
// Enter element 6: 88
// Smallest Number is: 3
//
/////////////////////////////////////////////////////////////////////