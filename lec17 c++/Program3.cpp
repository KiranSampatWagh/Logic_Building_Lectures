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

        void Table()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 10; iCnt++)
            {
                cout<<(iCnt * iNo)<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Table();

    return 0;
}