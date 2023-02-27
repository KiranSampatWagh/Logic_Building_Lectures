//display odd factors. 

#include<stdio.h>

void DisplayOddFactors(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) != 0))
        {
            printf("%d\t",iCnt);
        }
    }
}    

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayOddFactors(iValue);

    return 0;
}