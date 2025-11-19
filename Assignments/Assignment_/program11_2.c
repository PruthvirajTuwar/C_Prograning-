// Write a program which accept range from user and display all even numbers in between that range. 

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////
//
// Enter starting point: 23
// Enter ending point: 30
// 24 26 28 30
//
/////////////////////////////////////////////////