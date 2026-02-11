#include<stdio.h>

void Reverse(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");     
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}
