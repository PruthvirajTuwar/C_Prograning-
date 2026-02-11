#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tChar\tOct\tHex\n");
    printf("-----------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%3d\t", iCnt);

        if(iCnt < 32 || iCnt == 127)
        {
            printf(" \t");        // print blank for non-printable
        }
        else
        {
            printf("%c\t", iCnt); // printable char  
        }          
        
        printf("%#o\t", iCnt);
        printf("%#X\t", iCnt);
        printf("\n");
    }
    
}

int main()
{
    DisplayASCII();

    return 0;
}