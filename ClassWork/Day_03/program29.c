//  1   2   3  4  5
#include <stdio.h>

void Display()
{
    //Logic

    int icnt = 0;
    for(icnt = 1;icnt <= 5; icnt++)
    {
    printf("%d\t",icnt);
    }
    printf("\n");
}

int main()
{

    Display();
    return 0;
}