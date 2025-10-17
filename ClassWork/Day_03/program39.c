//  1   2   3  4  5
#include <stdio.h>

void Display(int iNo)
{
    //Logic

    int icnt = 0;
    for(icnt = iNo;icnt >= 0; icnt--)
    {
    printf("%d\t",icnt);
    }
    printf("\n");
}

int main()
{   
    int iValue  =0;
    printf("Please enter Frequncy :\n");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;
}