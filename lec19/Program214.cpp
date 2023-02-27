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

/*
Return_Value Class_Name :: Function_Name(Parameters)
{
    //Logic
}
*/

SinglyLL :: SinglyLL()      //Constructer
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{}

void SinglyLL :: InsertLast(int no)
{}

void SinglyLL :: InsertAtPos(int no , int ipos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int ipos)
{}

void SinglyLL :: Display()
{}

int main()
{
    SinglyLL obj1;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are:"<<obj1.iCount<<"\n";
    
    return 0;
}