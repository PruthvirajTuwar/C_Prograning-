// 2    4   6   8   10
#include <stdio.h>

void Display(int iNo)
{
    //Logic

    int icnt = 1;
    
    for(icnt = 2;icnt <= iNo; icnt++)
    {
        if (icnt%2 ==0)
        {
            printf("%d\t",icnt)
        }
   
    }
    printf("\n");
}
// Time complexity: O(N)

int main()
{   
    int iValue  =0;
    printf("Please enter Frequncy :\n");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;
}