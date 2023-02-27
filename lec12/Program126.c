//Accept character and check whether it small or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch )
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(iValue);

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