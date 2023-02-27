#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

SinglyCL :: SinglyCL()
{

}

void SinglyCL :: InsertFirst(int No)
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

void SinglyCL :: InsertLast(int No)
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

void SinglyCL :: DeleteFirst()
{
    PNODE temp = NULL;

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
        temp =*First;
        *First = (*First)->next;
        free (temp);
        (*Last)->next = *First;
    }
}

void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

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
        temp = *First;
        do
        {
            temp = temp->next;
        }while(temp->next != (*Last));

        free(temp->next);       //free(*Last);
        *Last = temp;
        (*Last)->next = (*First);
    }
}

void SinglyCL :: Display()
{
    printf("Element of Linked List are: \n");

    do
    { 
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int SinglyCL :: Count()
{
    int iCnt = 0;
    do
    { 
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    return iCnt;
}

void SinglyCL :: InsertAtPos(int No, int ipos)
{
    PNODE newn = NULL;
    int iNodeCnt = 0;
    iNodeCnt = Count(*First , *Last);
    int iCnt = 0;
    PNODE temp = NULL;

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

        newn->data = No;
        newn->next = NULL;

        temp = *First;
        
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCL :: DeleteAtPos(int ipos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First , *Last);
    int iCnt = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

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
        temp1 = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    SinglyCL obj;

    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();

    printf("Elementcount in linked list is:%d\n",iRet);

    obj.InsertAtPos(105, 5);
    obj.Display();
    
    iRet = obj.Count();

    printf("Elementcount in linked list is:%d\n",iRet);


    obj.DeleteAtPos(5);
    obj.Display();

    iRet = obj.Count();

    printf("Elementcount in linked list is:%d\n",iRet);


    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();

    printf("Elementcount in linked list is:%d\n",iRet);

    return 0;
}