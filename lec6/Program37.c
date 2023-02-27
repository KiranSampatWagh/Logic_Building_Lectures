// Return Summetion of non factors of numbers.
#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iAns = SumNonFactors(iValue);

    printf("Summetion of Non Factors is :%d\n",iAns);

    return 0;
}