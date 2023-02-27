// Display table of given number//
#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    
    printf("Table of %d is:\n",iNo);
    
    for( iCnt = 1 ; iCnt <= 10 ; iCnt++ )
    {
        printf("%d\t",(iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}