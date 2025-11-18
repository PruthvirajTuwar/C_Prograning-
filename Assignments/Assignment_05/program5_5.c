// Find Largest Among Three Number

#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, result;

    printf("Enter three number: ");
    scanf("%d %d %d ", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest nuber is: %d\n", result);

    return 0;
}

//////////////////////////////////////////////
//
// Enter three number: 2
// 3
// 4
// 5
// Largest nuber is: 4
//
//////////////////////////////////////////////