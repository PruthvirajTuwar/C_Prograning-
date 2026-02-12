#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE first, int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        return;
    }

    newn->data = No;
    newn->next = NULL;

    if((*first)==NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    int isPrime = 0;

    while(first != NULL)
    {
        isPrime = 1;

        if(first->data <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for(iCnt = 2; iCnt <= first->data / 2; iCnt++)
            {
                if(first->data % iCnt == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime == 1)
        {
            printf("%d\t", first->data);
        }
        first = first->next;
    }
}

int main()
{
    int iValue = 0, iCnt = 0, iNo = 0;
    int iRet = 0;
    PNODE head = NULL;

    printf("Enter the number of nodes : ");
    scanf("%d", &iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Enter the data for node %d : ", iCnt);
        scanf("%d", &iNo);

        InsertLast(&head, iNo);
    }

    Display(head);

    DisplayPrime(head);

    return 0;
}