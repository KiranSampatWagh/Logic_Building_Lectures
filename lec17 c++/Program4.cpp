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

        int  SumNonFact()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if((iNo % iCnt) != 0)
                {
                    iSum = iSum + iCnt;

                }
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.SumNonFact();

    cout<<"Sum of non factors is:"<<iRet<<"\n";

    return 0;
}