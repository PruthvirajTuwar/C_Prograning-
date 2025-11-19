// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %lf\n", dRet);

    return 0;
}

//////////////////////////////////////////////////
// 
// Enter width: 10
// Enter height: 20
// Area of rectangle is: 200.000000
//
//////////////////////////////////////////////////