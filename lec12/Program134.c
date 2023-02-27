//Accept string form user and return count of char in it.

#include<stdio.h>

int StrlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20] ;
    int iRet = 0;
   
    printf("Enter String:\n");
    scanf("%[^\n]s",Arr);

    iRet = StrlenX(Arr);

    printf("Number of char are:%d\n",iRet);

    return 0;
}