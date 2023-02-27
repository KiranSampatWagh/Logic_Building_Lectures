//Accept number form user and display even and odd digit count form that no.

#include<stdio.h>

void DisplayEvenOddDigit(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    if(iNo == 0)
    {
        printf("No of Even Digit are:1\n");
        printf("No of Odd Digit are:0\n");
        return ;
    }

    while(iNo != 0)
    {     
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("No of even digit are :%d\n",iEvenCnt);
    printf("No of odd digit are :%d\n",iOddCnt);
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigit(iValue);

    return 0;
}