#include<iostream>
using namespace std;

//Problems on N Numbers Templet

class Arrayx
{
    public:             
        int *Arr;           //Characteristics
        int iSize;

        Arrayx(int i)       //parameterised Constructer
        {
            iSize = i;
            Arr = new int[iSize];
        }
        
        void Accept()           //Gater Function
        {
            cout<<"Please enter the numbers: "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()          //Sater Function
        {
            cout<<"Element of Array are: "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        void Function() // Function with business logic
        {
            //Logic
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the numbers of elements: "<<"\n";
    cin>>iLength;

    Arrayx obj(iLength);

    obj.Accept();
    obj.Display();

    obj. Function();
    
    return 0;
}