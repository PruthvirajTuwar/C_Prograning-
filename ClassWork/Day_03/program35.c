// 5    4   3   2   1 
#include <stdio.h>

void Display()
{
    //Logic

    int icnt = 0;
    for (icnt=5; icnt >=1; icnt-- )
    {
        printf("%d\t"icnt);
    }
    printf("\n");
}
int main()
{


    Display();
    return 0;
}