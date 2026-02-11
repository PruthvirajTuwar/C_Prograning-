#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *src = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
        }
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^\n]s", Arr);

    StrCpyToggle(Arr, Brr);

    printf("Modified String is : %s", Brr);

    return 0;
}