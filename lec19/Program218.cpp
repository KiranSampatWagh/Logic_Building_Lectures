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
{}

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
       
    }
}

void SinglyLL :: DeleteAtPos(int ipos)
{}

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
    
    cout<<"Numbers of node are in First LinkedList is : "<<obj1.iCount<<"\n";
   
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();
    
    cout<<"Numbers of node are : "<<obj1.iCount<<"\n";
    
    
    return 0;
}