 //////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Required Header file
//
//
 //////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>                  //for Input output
#include <stdbool.h>                //For bool datatype

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AddtionTwoNumbers
//  Discription  :  It is used to check even or odd
//  Input        :  Integer
//  Output       :  Integer
//  Author       :  Pruthviraj Kashinath Tuwar
//  Date         :  10/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{

    return  ( (iNo % 2) == 0);
}
//////////////////////////////////////////////////////////////////////////////////////
//
// 
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////////////
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