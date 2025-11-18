// Write a program which accept number from user and print even factors of that number.

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}

///////////////////////////////////////////////////
//
// Enter Number: 36
// 2 6 12 18
//
///////////////////////////////////////////////////