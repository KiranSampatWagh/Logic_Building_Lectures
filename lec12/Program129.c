//Accept character and check whether it captil or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkCapptilx(char ch )
{
    if(ch >= 65 && ch <= 90)
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

    bRet = ChkCapptilx(iValue);

    if(bRet == true)
    {
        printf("Character %c is capptil\n",iValue);
    }
    else
    {
        printf("Character %c is not a capptil\n",iValue);
    }
    return 0;
}