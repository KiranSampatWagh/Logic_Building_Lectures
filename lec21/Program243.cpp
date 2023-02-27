
#include<iostream>
using namespace std;

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

class DoublyCl
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCl();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

/*
Return_value Class_name :: Function_name(___)
{
    //logic
}
*/

DoublyCl :: DoublyCl()
{
    First = NULL;
    Last =NULL;
}

void DoublyCl::InsertFirst(int No)
{
    PNODE newn = new NODE;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCl::InsertLast(int No)
{
    PNODE newn = new NODE;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCl::Display()
{
    PNODE temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty"<<"\n";
        return;
    }

    cout<<"Element of linked list are :"<<"\n";
    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

int DoublyCl::Count()
{
    int iCnt = 0;
    PNODE temp = First;
    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    
    return iCnt;
}

void DoublyCl::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = (First)->next;
        delete ((Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCl::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
       delete (First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = (Last)->prev;
        delete ((First)->prev);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCl::InsertAtPos(int No, int ipos)
{
    PNODE newn = NULL;
    PNODE temp =NULL;
    int iCnt = 0;
    int iNodeCnt = 0;
    iNodeCnt = Count();

    if((ipos < 1)||(ipos > iNodeCnt+1))
    {
        cout<<"Invalide Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(No);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new NODE;

        newn->data =No;
        newn->next =NULL;
        newn->prev =NULL;

        temp = First;
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

void DoublyCl::DeleteAtPos(int ipos)
{
    PNODE temp =NULL;
    int iCnt = 0;
    int iNodeCnt = 0;
    iNodeCnt = Count();

    if((ipos < 1)||(ipos > iNodeCnt))
    {
        cout<<"Invalide Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = (temp)->next;
        }
        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;   
    }
}    

int main()
{
    DoublyCl obj;

    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(105, 5);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.DeleteAtPos(5);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
   
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
   
    return 0;
}