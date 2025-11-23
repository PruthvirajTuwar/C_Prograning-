/*
    Algorithm
        Start
            Accept number of elements N
            Allocate array dynamically  
            Accept N integers from user
            For each element in array:
                Check if number % 3 == 0
                Check if number % 5 == 0
                If both true → display that number
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
//  Function Name   : Display
//  Description     : N numbers from user and display all such elements 
//                    which are divisible by 3 and 5. 
//  Input           : int
//  Output          : int
//  Author          : Pruthviraj Kashinath Tuwar
//  Date            : 18/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
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
        scanf("%d", &p[iCnt]);
    }

    printf("Divisible by both 3 and 5: ");
    Display(p, iSize);

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
// Enter element 4: 15
// Enter element 5: 93
// Enter element 6: 88
// Divisible by both 3 and 5: 15
//
/////////////////////////////////////////////////////////////////////