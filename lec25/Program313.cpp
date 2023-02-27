#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]> Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Data[] = {110,240,130,480};

    int iRet = Maximum(Data, 4);

    cout<<"Maximum of integer : "<<iRet<<"\n";

    float Dataf[] = {56.1f,37.2f,99.3f,12.4f};

    float fRet = Maximum(Dataf, 4);
    
    cout<<"Maximum of floats : "<<fRet<<"\n";
    
    return 0;
}