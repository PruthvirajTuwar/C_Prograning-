#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;    
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

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is : %d", iRet);

    return 0;
}
