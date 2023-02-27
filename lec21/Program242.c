
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Element of linked list are :\n");
    do
    {
        printf("| %d |<=>",First->data);
        First = First->next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    
    return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free ((*Last)->next);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
       free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free ((*First)->prev);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int ipos)
{
    PNODE newn = NULL;
    PNODE temp =NULL;
    int iCnt = 0;
    int iNodeCnt = 0;
    iNodeCnt = Count(*First, *Last);

    if((ipos < 1)||(ipos > iNodeCnt+1))
    {
        printf("Invalide Position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data =No;
        newn->next =NULL;
        newn->prev =NULL;

        temp = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = (temp)->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;         
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    PNODE temp =NULL;
    int iCnt = 0;
    int iNodeCnt = 0;
    iNodeCnt = Count(*First, *Last);

    if((ipos < 1)||(ipos > iNodeCnt))
    {
        printf("Invalide Position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast(First, Last);
    }
    else
    {
        temp = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = (temp)->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;   
    }
}    

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&Head, &Tail, 105, 5);
    
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes are : %d\n",iRet);
    
    DeleteAtPos(&Head, &Tail, 5);
    
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes are : %d\n",iRet);
   
    DeleteFirst(&Head, &Tail);
    DeleteLast(&Head, &Tail);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes are : %d\n",iRet);
   
    return 0;
}