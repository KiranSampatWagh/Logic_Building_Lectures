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

        void  ReverseNumber()
        {
            int iCnt = 0;

            for(iCnt = iNo; iCnt > 0; iCnt--)
            {
                cout<<iCnt<<"\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.ReverseNumber();

    return 0;
}