#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void NonFactors()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt != 0)
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.NonFactors();

    return 0;
}