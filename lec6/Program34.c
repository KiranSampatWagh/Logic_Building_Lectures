//check no is perfect or not.
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt =0;
    int iSum =0;

    for(iCnt =1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }  
    return iSum;  
}
// 6    28      496     8128
bool CheckPerfect(int iData)
{
    int iRet =0;

    iRet =SumFactors(iData);

    if(iRet == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue =0;
    bool bAns =false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bAns =CheckPerfect(iValue);

    if(bAns ==true)
    {
        printf("%d is a perfect numbers\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}