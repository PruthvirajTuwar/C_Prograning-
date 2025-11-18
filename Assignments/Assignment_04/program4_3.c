// Write a program which accept number from user and display al its non factors.

#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}

/////////////////////////////////////////////////////////
//
// Enter Number: 12
// 5 7 8 9 10 11
// 
// Enter Number: 13
// 2 3 4 5 6 7 8 9 10 11 12
//
// Enter Number: 10
// 3 4 6 7 8 9 
//
/////////////////////////////////////////////////////////