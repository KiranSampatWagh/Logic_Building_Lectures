#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      //x
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  //x
        *First = newn;
    }
}
void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = NULL;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp; //x 
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        (*First) = NULL;
    }
    else
    {  
        (*First) = (*First)->next;
        free((*First)->prev);   //x
        (*First)->prev = NULL;  //x
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        (*First) = NULL;
    }
    else
    {
        temp = (*First);

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE First)
{
    printf("NULL<=>");
    while(First != NULL)
    {
        printf("| %d |<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head,51);
    Display(Head);

    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    InsertLast(&Head,101);
    Display(Head);

    InsertLast(&Head,111);
    Display(Head);
    
    InsertLast(&Head,121);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);

    DeleteLast(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    return 0;
}