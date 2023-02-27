#include<iostream>
using namespace std;

 // Templet for problems on digit 

class DigitX
{
    public :
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i; 
        }
        void Function_Name()
        {
            //Logic
        }
};

int main()
{
    int iValue = 0;
    cout<<"Enter number: "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.Function_Name();

    cout<<obj.iNo<<"\n";

    return 0;
}