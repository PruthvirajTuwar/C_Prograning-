/*
Step1: understand the problme statment 
Step2: Write the algorithm
Step3: dicide the proraminig language
Step4: Write a program
Step5: Test  the program
*/
/*
    Alogorithme

    START
        Accept first number no1 
        Accept first number no2
        if is input is nnegitive then convert it into positive
        Perform Addition no1 & no2
        Display the addition on Screen

    STOP
    */



//////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header file 
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AddtionTwoNumbers
//  Discription:    It is used to perform addition
//  Input :         Float , Float 
//  Output :        Float
//  Author :        Pruthviraj Kashinath Tuwar
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////


float AddtionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    /// Updator
    if (fNo1<0.0f)
    {
        fNo1= -fNo1;
    }
    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2; // Business Logic
    return fSum; 
}
//////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float  fValue1 = 0.0f ,fValue2= 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",fValue2);

    fRet = AddtionTwoNumbers(fValue1 , fValue2);

   printf("Addition is :%f\n",fRet);
    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//  Input1 : 10.5  Input2: 3.2   Output:13.7  
//  Input1 : -10.5 Input2: 3.2   Output:13.7  
//  Input1 : 10.5  Input2: -3.2  Output:13.7
//  Input1 : -10.5 Input2: -3.2  Output:13.7    
//  Input1 : 10.5  Input2: 0.0   Output:10.5  
//////////////////////////////////////////////////////////////////////////////////////