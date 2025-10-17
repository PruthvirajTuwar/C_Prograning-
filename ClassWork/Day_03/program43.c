// input : 12 2    output: true
// input : 12 3   output: true
// input : 12 5    output: false
// input : 12 12    output: true
// input : 12 7    output: false
#include <stdio.h>


int main()
{   
    int iValue1= 0, iValue2 = 0;
    
    printf("Enter first Number : \n ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n ");
    scanf("%d",&iValue2);

    if (( iValue1 % iValue2)==0)
    {
        printf(" it is Completly devisible \n");
    }
    else 
    {
         printf(" it is Not devisible \n");

    }
    return 0;
}