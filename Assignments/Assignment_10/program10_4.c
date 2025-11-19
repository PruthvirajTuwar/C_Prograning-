// Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)) 

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}

//////////////////////////////////////////////////
//
// Enter temperature in Fahrenheit: 10
// Temperature in Celsius is: -12.222222
//
//////////////////////////////////////////////////