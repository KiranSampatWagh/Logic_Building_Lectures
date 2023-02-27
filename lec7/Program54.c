//Accept number and return summetion of digit.

#include<stdio.h>

int SumDigit(int iNo)
{
    int iSum = 0;

    if(iNo < 0)     //updeter
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {     
        iSum = iSum + (iNo % 10);
        iNo /=  10;
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