#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFiveAndThree(int iNo)
{
    int iRet1 =0, iRet2 =0;

    iRet1 = iNo % 3;
    iRet2 = iNo % 5;
    
    if((iRet1%5 ==0)&&(iRet2%3 ==0))
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bAns =DivisibleByFiveAndThree(iValue);
    
    if(bAns ==true)
    {
        printf("%d No is  divisible by 5&3 \n",iValue);
    }
    else
    {
        printf("%d No is not divisible by 3or5\n",iValue);
    }
    return 0;
}