#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool ChkPerfect(int iNo)
{
    int iSum = 0;
    int iTemp = iNo;
    int iCnt = 0;

    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == iTemp);
}

void DisplyPerfect(PNODE First)
{
    bool bRet = false;
    while(First != NULL)
    {
        bRet = ChkPerfect(First->data);

        if(bRet == true)
        {
            printf("%d is Perfect number\n", First->data);
        }
        First = First->next;
    }
}

int main()
{       
    PNODE Head = NULL;

    InsertLast(&Head, 11);
    InsertLast(&Head, 28);
    InsertLast(&Head, 51);
    InsertLast(&Head, 496);
    InsertLast(&Head, 111);
    InsertLast(&Head, 8128);
    
    Display(Head);

    DisplyPerfect(Head);

    return 0;
}