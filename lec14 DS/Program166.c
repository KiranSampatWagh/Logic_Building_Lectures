// Data Structures -> Linked List

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
    //step 1: Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    //step 2: Initilise the node
    newn->data = No;
    newn->next = NULL;

    //step 3: Check Linkedlist is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else   // if linkedlist contain at least one node
    {
        newn->next = *First;
        *First = newn;
    }    
}

void Display(PNODE First) 
{

}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    Display(Head);

    return 0;
}
