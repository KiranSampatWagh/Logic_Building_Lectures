#include<stdio.h>


int Summation(int iNo)
{
    int iSum =0;
    int iCnt =0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}    

int main()
{
    int iAns =0;
    int iValue =0;
    
    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iAns =Summation(iValue);
    printf("Value of Summation is %d\n",iAns);
    return 0;
}