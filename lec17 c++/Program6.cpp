#include<iostream>
using namespace std;

class Arrayx
{
    public:
        int *Arr;
        int iSize;

        Arrayx(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }
        
        ~Arrayx()              
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Please enter the numbers: "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Element of Array are: "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        void EvenNumber() // Function with business logic
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }

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

    obj. EvenNumber();
    
    return 0;
}