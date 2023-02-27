#include<iostream>
using namespace std;

//Problems on Numbers Templet

class Numbers
{
    public:
                 //Characteristics
        int iNo;       
                //Parameterised constructor
        Numbers(int i)  
        {
            iNo = i;
        }
                //Behaviour
        void Function() //Here you want to place the function with bussines logic
        {
            //Logic
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number: \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Function();

    return 0;
}