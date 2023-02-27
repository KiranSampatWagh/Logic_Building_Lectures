//Count the number of digit in the given number
#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)    //filter
    {
        return 1;
    }
    
    if(iNo < 0)     //updeter
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {      
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Numbers of digits is %d\n",iRet);

    return 0;
}