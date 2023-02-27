//Accept number form user and return even of digit count form that no.

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)     //updeter
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {     
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("Even count of digit is %d\n",iRet);

    return 0;
}