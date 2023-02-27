#include<stdio.h>


int Summation()
{
    int iSum =0;
    int iCnt =0;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}    

int main()
{
    int iAns =0;
    iAns =Summation();
    printf("Value of Summation is %d\n",iAns);
    return 0;
}