//Accept number form user and return smaller digit no.

#include<stdio.h>

int MiniDigit(int iNo)
{
    int iDigit = 0;
    int iMini = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMini)
        {
            iMini = iDigit;
        }
        if(iMini == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMini;
}

int main()
{
    int iValue = 0;
   int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MiniDigit(iValue);

    printf("Smallest digit is : %d\n",iRet);
 
    return 0;
}