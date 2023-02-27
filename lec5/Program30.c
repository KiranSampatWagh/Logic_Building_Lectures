//Accept no form user and return Factorial of given number.            

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact =1;
    int iCnt =0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}    

int main()
{
    int iAns =0;
    int iValue =0;
    
    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iAns =Factorial(iValue);
    printf("Factorial of %d is %d\n",iValue,iAns);
    return 0;
}