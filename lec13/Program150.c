//Accept one char ond return the toggle of that char.

#include<stdio.h>

char ToToggle(char ch)
{
    if((ch >='A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else if((ch >='a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter character:\n");
    scanf("%c",&cValue);

    cRet = ToToggle(cValue);

    printf("Character is toggle: %c\n",cRet);

    return 0;
}