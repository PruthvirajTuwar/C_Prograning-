#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iLast = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iCount;
        }
        iCount++;
        str++;
    }

    return iLast;    
}

int main()
{
    char Arr[50] ={'\0'}; 
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s", Arr); 

    printf("Enter the character : \n");
    scanf(" %c", &cValue); 

    iRet = LastChar(Arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}
