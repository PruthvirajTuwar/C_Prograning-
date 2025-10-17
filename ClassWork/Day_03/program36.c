//  1   2   3  4  5
#include <stdio.h>

void Display(int iNo)
{
    //Logic

    int icnt = 0;
    for(icnt = 1;icnt <= iNo; icnt++)
    {
    printf("%d\t",icnt);
    }
    printf("\n");
}

int main()
{

    Display(7);
    return 0;
}