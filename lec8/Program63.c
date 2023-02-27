//Accept number form user and check its pallindrome numbers.
// for loop standard way
#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    for( iRev = 0; iNo != 0; iNo = iNo / 10 )
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;   
    }
    if(iRev == iTemp)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number\n",iValue);
    }

    return 0;
}