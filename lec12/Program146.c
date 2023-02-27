//Accept string form user and accept one another char for user and chek whether char is present in string.

#include<stdio.h>  
#include<stdbool.h> 

bool ChkChar(char *str , char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        } 
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter latter:\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("char is present in string");
    }
    else
    {
        printf("char is dose not present in string");
    }
    return 0;
}