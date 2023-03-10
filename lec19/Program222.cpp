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

class SinglyLL
{   
    public:
        //Characteristics
        PNODE First;
        int iCount;

        //Behaviour
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no , int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
};

SinglyLL :: SinglyLL()      //Constructer
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    //step1 : Allocate memory for node
    PNODE newn = new NODE;
    
    //step2 : Initilised node
    newn->data = no;
    newn->next = NULL;

    //step3 : Check if LL is empty or not
    if(First == NULL) //if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    //if LL contain at least one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int no)
{
    //step1 : Allocate memory for node
    PNODE newn = new NODE;
    
    //step2 : Initilised node
    newn->data = no;
    newn->next = NULL;

    //step3 : Check if LL is empty or not
    if(First == NULL) //if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    //if LL contain at least one node
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: InsertAtPos(int no , int ipos)
{

    if((ipos < 1)||(ipos > iCount + 1))
    {
        cout<<"Invalide Position"<<"\n";
        return; 
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    { 
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        PNODE temp = First;
        int iCnt = 0;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{

    if(First == NULL) // if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) //else if(icount == 1)
    {
        delete(First);
        First = NULL;
        iCount--;
    }
    else
    {   
        PNODE temp = First;

        First = First->next;
        delete temp;
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
    

    if(First == NULL) // if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) //else if(icount == 1)
    {
        delete(First);
        First = NULL;
        iCount--;
    }
    else
    {   
        PNODE temp = First;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

void SinglyLL :: DeleteAtPos(int ipos)
{
    if((ipos < 1)||(ipos > iCount))
    {
        cout<<"Invalide Position"<<"\n";
        return; 
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    { 
        PNODE temp1 = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

void SinglyLL :: Display()
{
    cout<<"Element of LinkedList are : "<<"\n";
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    SinglyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    
    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";
   
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();
    
    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";

    obj1.InsertAtPos(105, 5);

    obj1.Display();

    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";
    
    obj1.DeleteAtPos(5);

    obj1.Display();

    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";
    
    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();

    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";
    
    return 0;
}