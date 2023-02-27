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

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));   // 1 allocate memory

    newn->data = No;
    newn->next = NULL;
        
    if(*First == NULL)  //if linked list is empty
    {
        *First = newn;
    }
    else    //if linked list contain at lest one node
    {
        newn->next = *First;
        *First = newn;
    }
}   

void InsertLast(PPNODE First , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));   // 1 allocate memory

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)  //if linked list is empty
    {
        *First = newn;
    }
    else    //if linked list contain at lest one node
    {

    }            
}

void Display(PNODE First)
{
    printf("Element in linked list are:\n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("Null\n");
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
    int iRet = 0;
    
    PNODE Head = NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Count(Head);

    printf("Number of nodes are:%d\n",iRet);

    return 0;
}