//Accept number and return summetion of digit.

#include<stdio.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {     
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summetion of digits is %d\n",iRet);

    return 0;
}