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

    if(*First == NULL) 
    {
        *First = newn;
    }
    else   
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

void DisplayDigitSum(PNODE First)
{
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    while(First != NULL)
    {
        iNo = First->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("|%d|->",iSum);
        First = First->next;
        iSum = 0;
    }
    printf("NULL\n");
}

int main()
{       
    PNODE Head = NULL;

    InsertLast(&Head, 11);
    InsertLast(&Head, 21);
    InsertLast(&Head, 51);
    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    
    Display(Head);

    DisplayDigitSum(Head);

    return 0;
}