//Accept character and check whether it Digit or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkDigitx(char ch )
{
    if(ch >= 48 && ch <= 57)
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

    bRet = ChkDigitx(iValue);

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