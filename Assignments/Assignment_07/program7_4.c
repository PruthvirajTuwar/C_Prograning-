// Write a program which accepts N from user and print all odd numbers up to N. 

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i += 2)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////
// 
// Enter number: 11
// 1 3 5 7 9 11
//
/////////////////////////////////////////////////////////////