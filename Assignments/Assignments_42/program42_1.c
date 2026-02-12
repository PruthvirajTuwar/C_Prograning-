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

int SearchFirstOcc(PNODE first, int no)
{
    int iFirstOcc = 1;

    while(first != NULL)
    {
        if((first->data) == no)
        {
            return iFirstOcc;
        }
        iFirstOcc++;
        first = first->next;
    }
    
    return -1;
}

int main()
{
    int iValue = 0, iCnt = 0, iNo1 = 0, iNo2 = 0;
    int iRet = 0;
    PNODE head = NULL;

    printf("Enter the number of nodes : ");
    scanf("%d", &iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Enter data for node %d : ", iCnt);
        scanf("%d", &iNo1);

        InsertLast(&head, iNo1);
    }

    Display(head);

    printf("Enter element to find it's first occurrence : ");
    scanf("%d", &iNo2);

    iRet = SearchFirstOcc(head, iNo2);
    
    if(iRet == -1)
    {
        printf("Element not Found\n");
    }
    else
    {
        printf("First Occurrence is at : %d\n", iRet);
    }

    return 0;
}
