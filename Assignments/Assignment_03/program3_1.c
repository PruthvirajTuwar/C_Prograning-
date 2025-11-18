// Write a program which accept one number from user and print that number of even number on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    // Logic to print first N even numbers
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d ", 2 * i);
    } 
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////////
// 
// Enter number: 7
// 2 4 6 8 10 12 14
//
//////////////////////////////////////////////////