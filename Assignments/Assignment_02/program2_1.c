// Accept one number form user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////
//
// Enter number: 1
// *
//
////////////////////////////////