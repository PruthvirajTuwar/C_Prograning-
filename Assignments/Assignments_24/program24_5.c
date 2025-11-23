/*
    Algorithm
        Start
            Accept N (total number of elements)
            Allocate memory dynamically
            Accept all N elements
            For each element in array:
                Make a copy of number
                Take absolute value
                Initialize sum = 0
                Extract each digit using %10
                Add it to sum
                Divide number by 10
                Repeat until number becomes 0
            Display summation for each number
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
//  Function Name   : DigitsSum
//  Description     : N numbers from user and display summation of digits of each number.
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 18/11/2025
//
/////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, num = 0, sum = 0, temp = 0;

    for(i = 0; i < iLength; i++)
    {
        num = Arr[i];
        if(num < 0)
        {
            num = -num;   // handle negative numbers
        }

        sum = 0;
        temp = num;

        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        printf("%d ", sum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    printf("Summation of digits for each number: ");
    DigitsSum(p, iSize);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
// Enter number of elements: 6
// Enter 6 elements:
// Enter element 1: 8225
// Enter element 2: 665
// Enter element 3: 3
// Enter element 4: 76
// Enter element 5: 953
// Enter element 6: 858
// Summation of digits for each number: 17 17 3 13 17 21
//
/////////////////////////////////////////////////////////////////////