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
//  Discription  :  It is used to perform addition
//  Input        :  Float , Float 
//  Output       :  Float
//  Author       :  Pruthviraj Kashinath Tuwar
//  Date         :  09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////


float AddtionTwoNumbers(
                        float fNo1,                     //First Input 
                        float fNo2                      //Second Input
                        )
{
    float fSum = 0.0f;
    
    if (fNo1<0.0f)                                      //Updator
    {
        fNo1= -fNo1;
    }
    if(fNo2<0.0f)                                       //Updator
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2;                                 // Business Logic
    return fSum; 
} // End of AddtionTwoNumbers
//////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float  fValue1 = 0.0f ,fValue2= 0.0f;           // To accept user input  
    float fRet = 0.0f;                              // to Store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AddtionTwoNumbers(fValue1 , fValue2);  // Function call

   printf("Addition is :%f\n",fRet);
    
    return 0;
} // End of main
//////////////////////////////////////////////////////////////////////////////////////
//  Input1 : 10.5  Input2: 3.2   Output:13.7  
//  Input1 : -10.5 Input2: 3.2   Output:13.7  
//  Input1 : 10.5  Input2: -3.2  Output:13.7
//  Input1 : -10.5 Input2: -3.2  Output:13.7    
//  Input1 : 10.5  Input2: 0.0   Output:10.5  
//////////////////////////////////////////////////////////////////////////////////////