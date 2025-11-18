// Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);     // Convert uppercase to lowercase
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);     // Convert lowercase to uppercase
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

/////////////////////////////////////////////
//
// Enter character
// a
// A
//
/////////////////////////////////////////////