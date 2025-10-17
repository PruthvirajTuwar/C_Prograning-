
#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{

    if ( (iNo % 2) == 0)
    {
       return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    int iValue = 0;
    bool bRet = false ;


    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is : %d\n",bRet);

    if(bRet == true)
    {
        printf("%d is even number \n",iValue);
    }
    else
    {
        printf("%d is even number \n",iValue);
    }

     return 0;
}