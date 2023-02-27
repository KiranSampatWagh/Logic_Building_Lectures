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

        void Factors() //Here you want to place the function with bussines logic
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo/2; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number: \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Factors();

    return 0;
}