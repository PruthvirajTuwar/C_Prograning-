#include<stdio.h>

char Display(char chDiv)
{
    if(chDiv >= 'A' && chDiv <= 'Z')
    {
        chDiv = chDiv + 32;
    }  
    else if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }
    else
    {
        chDiv = chDiv;
    }
    return chDiv;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    cRet = Display(cValue); 

    printf("%c", cRet);
    return 0;
}