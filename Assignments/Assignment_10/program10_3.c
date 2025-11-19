// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter) 

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////
//
// Enter distance in kilometre: 10
// Distance in meter is: 10000
//
//////////////////////////////////////////////////