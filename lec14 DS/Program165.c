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

void InsertFirst(PPNODEE First , int No)
{

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


/*
    void InsertFirst(PPNODE First, int No)
    void InsertLast(PPNODE First, int No)
    void InsertAtPos(PPNODE First, int No, int pos)

    void DeletFirst(PPNODE First)
    void DeletLast(PPNODE First)
    void DeletAtPos(PPNODE First, int pos)

    void Display(PNODE First)
    int Count(PNODE First)
*/
////////////////////////////////////////////
/*
    InsertFirst(&Head, 11)
    InsertLast(&Head, 11)
    InsertAtPos(&Head, 11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head,5)

    Display(Head)
    Count(Head)

*/







