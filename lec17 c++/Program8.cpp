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

        int Average()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return (iSum/iSize);
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number of element:"<<"\n";
    cin>>iValue;

    Arrayx obj(iValue);

    obj.Accept();
    obj.Display();

    iRet = obj.Average();

    cout<<"Average is :"<<iRet<<"\n";

    return 0;
}