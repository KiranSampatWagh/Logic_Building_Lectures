#include<iostream>
using namespace std;

//Problems on N Numbers 

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

        int SumEven()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the numbers of elements: "<<"\n";
    cin>>iLength;

    Arrayx obj(iLength);

    obj.Accept();
    obj.Display();

    iRet = obj.SumEven();

    cout<<"Summation of Even Numbers is:"<<iRet<<"\n";
    
    return 0;
}