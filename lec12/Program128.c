//Accept character and check whether it captil or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkCapptil(char ch )
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapptil(iValue);

    if(bRet == true)
    {
        printf("Character %c is capptil\n",iValue);
    }
    else
    {
        printf("Character %c is not a capptil\n",iValuv//Accept character and check whether it captil or not.
e);
    }
    return 0;
}