#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^\n]s", Arr);

    StrCpyRev(Arr, Brr);

    printf("Modified String is : %s", Brr);

    return 0;
}