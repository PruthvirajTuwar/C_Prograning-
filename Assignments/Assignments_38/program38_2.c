#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src == ' ')
        {
           src++;
        }
        else
        {
            *dest = *src;
            src++;
            dest++;
        }
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^\n]s", Arr);

    StrCpyX(Arr, Brr);

    printf("Modified String is : %s", Brr);

    return 0;
}