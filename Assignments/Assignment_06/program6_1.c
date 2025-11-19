// Write a program which accept name from user and print that name.

// Input : Akshay Rajale  
// Output : Akshay Rajale 

#include<stdio.h>
int main()
{
    char Name[30];
    printf("Please enter full name: ");
    scanf("%[^\n]s", Name);      // Reads full name including spaces
    printf("Your name is %s", Name);
    return 0;
}

/////////////////////////////////////////////
//
// Please enter full name: Akshay Rajale
// Your name is Akshay Rajale
//
/////////////////////////////////////////////