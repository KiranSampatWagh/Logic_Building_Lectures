//Accept string form user and return occerence of Captil char in it.

#include<stdio.h>

int CountFrequency(char *str , char ch)
{
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str == ch)
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

    iRet = CountFrequency(Arr,'a');

    printf("Frequency of captil latters is :%d\n",iRet);

    return 0;
}