/*
Step1: understand the problme statment 
Step2: Write the algorithm
Step3: dicide the proraminig language
Step4:
Step5:



*/
/*
    Alogorithme
    START
        Accept first number no1 
        Accept first number no2
        Perform Addition no1 & no2
        Display the addition on Screen

    STOP
    */
#include<stdio.h>

float AddtionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;
    fSum = fNo1 + fNo2; // Business Logic
    return fSum; 
}

int main()
{
    float  fValue1 = 0.0f ,fValue2= 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AddtionTwoNumbers(fValue1,fValue2);

    printf("Addition is :%f\n",fRet);
    
    return 0;
}