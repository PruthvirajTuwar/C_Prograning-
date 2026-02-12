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

int Minimum(PNODE first)
{
    int iMin = 0;

    if(first == NULL)
    {
        return -1;
    }

    iMin = first->data;
    first = first->next;

    while(first != NULL)
    {
        if(first->data < iMin)
        {
            iMin = first->data;
        }
        first = first->next;
    }
    
    return iMin;
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
        printf("Enter the element for node %d : ", iCnt);
        scanf("%d", &iNo);

        InsertLast(&head, iNo);
    }
    
    Display(head);

    iRet = Minimum(head);
    
    printf("Smallest is %d",iRet);

    return 0;
}