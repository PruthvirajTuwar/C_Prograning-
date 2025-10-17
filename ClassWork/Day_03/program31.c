// *    *   *   *   *   *
#include <stdio.h>

void Display()
{
    //Logic

    int icnt = 0;
    for(icnt = 1;icnt <= 5; icnt++)
    {
    printf("*\t",icnt);// *\t
    }
    printf("\n");
}

int main()
{


    Display();
    return 0;
}