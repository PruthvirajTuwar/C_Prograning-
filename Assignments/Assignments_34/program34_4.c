#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
       ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue); 

    if(bRet == TRUE)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not special character\n");
    }
    return 0;
}