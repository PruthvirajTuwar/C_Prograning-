// Write a program which accept number from user and display its table in reverse order. 

#include<stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

/////////////////////////////////////////////
//
// Enter number: 11
// 110 99 88 77 66 55 44 33 22 11
//
/////////////////////////////////////////////