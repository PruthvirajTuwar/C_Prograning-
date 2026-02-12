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

void SumDigit(PNODE first)
{
    int iDigit = 0, iSum = 0;
    while(first != NULL)
    {
        iDigit = 0, iSum = 0;
        while(first->data != 0)
        {
            iDigit = (first->data % 10);
            iSum = iSum + iDigit;
            first->data = first->data / 10;
        }
        printf("%d\t",iSum);
        first = first->next;
    }
}

int main()
{
    int iValue = 0, iCnt = 0, iNo = 0;
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

    SumDigit(head);

    return 0;
}