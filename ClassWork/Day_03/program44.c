
#include <stdio.h>
#include<stdbool.h>

bool checkDivisible(int iNo1, int iNo2)
{
    if ( (iNo1 % iNo2)==0)
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
    int iValue1= 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Enter first Number : \n ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n ");
    scanf("%d",&iValue2);

    bRet = checkDivisible(iValue1,iValue2);


    if (bRet==true)
    {
        printf(" it is Completly devisible \n");
    }
    else 
    {
         printf(" it is Not devisible \n");

    }
    return 0;
}