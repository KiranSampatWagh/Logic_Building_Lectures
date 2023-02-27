// Accept no form user and return Facters of given number

#include<stdio.h>

//O(N)
void DisplayFactors(int iNo)
{
    int iCnt =0;
    printf("Factors are: \n");

    for(iCnt =1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }    
}   

int main()
{
    int iValue =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}