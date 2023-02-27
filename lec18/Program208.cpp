//Accept number and return frequency of each digit
//inpute: 1121455
// output:  1 occurs 3 times
//          2 occurs 1 times
//          4 occurs 1 times
//          5 occurs 2 times

#include<iostream>
using namespace std;

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

        void DisplayFrequency()
        {
            int iTemp = iNo; 
            int iDigit = 0;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10; 
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }
            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > 0 )
                {
                    cout<<iCnt<<" occrs at "<<Frequency[iCnt]<<" times"<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number: "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();

    return 0;
}