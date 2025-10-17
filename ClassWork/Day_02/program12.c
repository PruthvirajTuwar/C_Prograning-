/*
    STAR
        Accept number and  Store as NO
        Divide NO by 2
        IF the remainder is 0
          then  display as even
        otherwise 
          Display as Odd
    STOP


*/
#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
     iRem = iNo % 2;

    if (iRem == 0)
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd number\n");

    }


}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);




    return 0;
}