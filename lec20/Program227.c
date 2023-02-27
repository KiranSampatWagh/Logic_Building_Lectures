#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;

    if((*First == NULL)&&(*Last == NULL))    //Empty LL
    {
        *First =*Last = newn;
        (*Last)->next = *First;   
    }
    else //LL contain at lest 1 node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if((*First == NULL)&&(*Last == NULL))    //Empty LL
    {
        *First =*Last = newn;
        (*Last)->next = *First;   
    }
    else  //LL contain at lest 1 node
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL)&&(*Last == NULL))   //EmptyLL
    {
        return;
    }
    else if(*First == *Last)    //Single node in LL
    {
        free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else    //If LL contain more than 1 node
    {
        *First = (*First)->next;
        free (*Last)->next;
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    
    if((*First == NULL)&&(*Last == NULL))   //EmptyLL
    {
        return;
    }
    else if(*First == *Last)    //Single node in LL
    {
        free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else    //If LL contain more than 1 node
    {   
       
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Element of Linked List are: \n");

    do
    { 
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    { 
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    return iCnt;
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

    printf("Elementcount in linked list is:%d\n",iRet);

    return 0;
}