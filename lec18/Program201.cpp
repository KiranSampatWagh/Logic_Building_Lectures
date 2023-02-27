//Return Smallest no in Array.

#include<iostream>
using namespace std;

class Arrayx
{
    public:
        int *Arr;
        int iSize;

        Arrayx(int i)
        {
            cout<<"Allocating memory for Array..."<<"\n";
            iSize = i;
            Arr = new int[iSize];
        }

        ~Arrayx()
        {
            cout<<"Deallocating memory for resources..."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the element of array: "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Element of array are :"<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int Minimum()
        {
            int iMin = Arr[0];

            for(int iCnt = 0; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iLength = 0 , iRet = 0 ;

    cout<<"Enter the Size :"<<"\n";
    cin>>iLength;

    Arrayx * obj = new Arrayx(iLength); // Dynamic

    obj->Accept();
    obj->Display();

    iRet = obj->Minimum();

    cout<<"Smallest number is: "<< iRet<<"\n";

    delete obj;
    
    return 0;
}