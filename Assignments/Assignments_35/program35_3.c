#include<stdio.h>

int CountSmall(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;
    
    while(*str != '\0')
    {
        if(*str >='A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }

    return (iCountSmall - iCountCapital);
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^\n]s", Arr);

    iRet = CountSmall(Arr);

    printf("The difference between frequency of small and frequency of capital is : %d", iRet);
}