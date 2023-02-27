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

void InsertLast(PPNODE First , int No)
{
    PNODE temp = *First;

    PNODE newn = (PNODE)malloc(sizeof(NODE));   // 1 allocate memory

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)  //if linked list is empty
    {
        *First = newn;
    }
    else    //if linked list contain at lest one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
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

int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First->data);
        First = First->next;
    }
    return iSum;
}

int main()
{   
    int iRet = 0;
    
    PNODE Head = NULL;

    InsertLast(&Head, 11);
    InsertLast(&Head, 21);
    InsertLast(&Head, 51);
    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    
    Display(Head);

    iRet = Addition(Head);

    printf("Addition is :%d\n",iRet);

    return 0;
}