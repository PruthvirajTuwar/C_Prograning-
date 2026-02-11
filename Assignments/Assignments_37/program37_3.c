#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        iCount++;
        str++;
    }

    return -1;    
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

    iRet = FirstChar(Arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}
