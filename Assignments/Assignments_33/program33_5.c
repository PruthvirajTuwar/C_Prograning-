#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("Your exam is at 7 AM\n");
    }
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Your exam is at 8.30 AM\n");   
    }
    else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Your exam is at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");       
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue); 

    return 0;

}
