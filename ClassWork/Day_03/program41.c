// 2    4   6   8   10
#include <stdio.h>

void Display(int iNo)
{
    //Logic

    int icnt = 0;
    
    for(icnt = 2;icnt <= iNo; icnt+=2)
    {
    printf("%d\t",icnt);
    }
    printf("\n");
}
// Time complexity: O(N/2)

int main()
{   
    int iValue  =0;
    printf("Please enter Frequncy :\n");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;
}