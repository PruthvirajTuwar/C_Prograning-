/*
    Algorithm
        Start
            Accept number of elements N
            Allocate array dynamically
            Accept all N elements from user
                Count digits
            If digit count == 3 → display that number
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
//  Function Name   : Digits
//  Description     : N numbers from user and display all such 
//                    numbers which contains 3 digits in it.     
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 18/11/2025
//
/////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int i = 0, num = 0, count = 0;

    for(i = 0; i < iLength; i++)
    {
        num = Arr[i];

        if(num < 0)
        {
            num = -num;    // handle negative numbers
        }

        count = 0;

        while(num != 0)
        {
            num = num / 10;
            count++;
        }

        if(count == 3)
        {
            printf("%d ", Arr[i]);
        }
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

    printf("3 Digit numbers are: ");
    Digits(p, iSize);

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
// 3 Digit numbers are: 665 953 858
//
/////////////////////////////////////////////////////////////////////