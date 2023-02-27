//Accept character and check whether it small or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkSmallx(char ch )
{
    if(ch >= 97 && ch <= 122)
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

    bRet = ChkSmallx(iValue);

    if(bRet == true)
    {
        printf("Character %c is Small\n",iValue);
    }
    else
    {
        printf("Character %c is not a Small\n",iValue);
    }
    return 0;
}