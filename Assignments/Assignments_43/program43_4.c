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

    newn->data = No;
    newn->next = NULL;

    if((*first)==NULL)
    {
        *first = newn;
    }
    else
    {
        temp = (*first);

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

int SecMaximum(PNODE first)
{
    int iMax = 0;
    int SecMax = -1;

    if(first == NULL)
    {
        return -1;
    }

    iMax = first->data;
    first = first->next;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            SecMax = iMax;
            iMax = first->data;
        }
        else if(first->data > SecMax && first->data != iMax)
        {
            SecMax = first->data;
        }

        first = first->next;
    }
    
    return SecMax;
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

    iRet = SecMaximum(head);
    
    printf("Second Largest is %d",iRet);

    return 0;
}