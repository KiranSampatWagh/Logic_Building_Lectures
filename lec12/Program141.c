//Accept string form user and return occerence of Captil char in it.

#include<stdio.h>

int CountCaptil(char *str)
{
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCaptil(Arr);

    printf("Frequency of captil latters is :%d\n",iRet);

    return 0;
}