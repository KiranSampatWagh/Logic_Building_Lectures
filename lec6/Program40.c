//reverse number display using while loop. 

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;
    printf("----------------------------------\n");
    iCnt = iNo ;
    while( iCnt >= 1 )
    {
        printf("%d\t",iCnt);
        iCnt-- ;
    }
    printf("\n-----------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}