/*
    Algorithm
        START
            Accept N
            Accept array elements
            Initialise product = 1
            For each element:
                If element % 2 != 0
                    product = product * element
                If no odd number found
                return 0
            Else return product
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
//  Function Name   : Product
//  Description     : N numbers from user and return product of all odd elements.    
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 17/11/2025
//
/////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProd = 1;
    int OddFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProd = iProd * Arr[iCnt];
            OddFound = 1;
        }
    }

    if(OddFound == 0)
    {
        return 0;
    }

    return iProd;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product of odd elements is: %d\n", iRet);

    free(p);
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// 15
// 66
// 3
// 70
// 10
// 88
// Product of odd elements is: 45
//
/////////////////////////////////////////////////////////////////////