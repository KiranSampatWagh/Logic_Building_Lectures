//Accept string form user and return occerence of small char in it.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        } 
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]s",Arr);

    iRet = CountSmall(Arr);

    printf("Frequency of small latters is :%d\n",iRet);

    return 0;
}