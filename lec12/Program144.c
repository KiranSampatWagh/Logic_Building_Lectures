//Accept string form user and accept one another char for user and return occerence of another char in string.

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
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]s",Arr);

    printf("Enter latter:\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of captil latters is :%d\n",iRet);

    return 0;
}