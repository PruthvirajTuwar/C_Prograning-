// Factors Of 6
#include <stdio.h>


/// Wrong Approach
void DisplayFactors(int iNo)
{
   if ((iNo% 1) ==0)
   {
    printf("1\n");
   }
    if ((iNo% 2) ==0)
   {
    printf("2\n");
   }
    if ((iNo% 3) ==0)
   {
    printf("3\n");
   }
    if ((iNo% 4) ==0)
   {
    printf("4\n");
   }
    if ((iNo% 5) ==0)
   {
    printf("5\n");
   }
    
}

int main()
{   
    int iValue= 0;
   
    
     printf("Enter Number : \n ");
    scanf("%d",&iValue);

    
    DisplayFactors(iValue);
   
    return 0;
}