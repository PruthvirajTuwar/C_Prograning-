// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;  // Convert uppercase to lowercase
    }

    if(cValue == 'a' || cValue == 'e' || cValue =='i' || cValue =='o' || cValue =='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf(" %c", &cValue);     // note the space before %c to handle newline issues

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

/////////////////////////////////////////////////////
//
// Enter Character: a
// It is Vowel
//
// Enter Character: b
// It is not Vowel
//
/////////////////////////////////////////////////////