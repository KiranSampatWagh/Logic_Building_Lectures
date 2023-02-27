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
            cout<<"Enter the elements :"<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Element of Array:"<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        void PrimeNumber()
        {
            cout<< "Prime Numbers in Array:"<<"\n";
            int iCnt = 0;
            int icnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                int iCount = 0;
                for(icnt = 1; icnt <= Arr[iCnt]; icnt++)
                {
                    if((Arr[iCnt] % icnt) == 0)
                    {
                        iCount++;     
                    }
                }
                if(iCount == 2)
                {
                    cout<< Arr[iCnt]<<"\t";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number of element:"<<"\n";
    cin>>iValue;

    Arrayx obj(iValue);

    obj.Accept();
    obj.Display();

    obj.PrimeNumber();

    return 0;
}