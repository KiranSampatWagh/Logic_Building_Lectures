//display odd factors. reduce complaxcity by 75%

#include<stdio.h>

void DisplayOddFactors(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= (iNo/2) ; iCnt = (iCnt + 2) )
    {
        if((iNo % iCnt) == 0) 
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