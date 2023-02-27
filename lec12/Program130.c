//Accept character and check whether it Digit or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch )
{
    if(ch >= '0' && ch <= '9')
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
    char iValue = '\0';
    bool bRet =false;

    printf("Enter character:\n");
    scanf("%c",&iValue);

    bRet = ChkDigit(iValue);

    if(bRet == true)
    {
        printf("Character %c is Digit\n",iValue);
    }
    else
    {
        printf("Character %c is not a Digit\n",iValue);
    }
    return 0;
}