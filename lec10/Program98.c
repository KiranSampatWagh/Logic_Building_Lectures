//IP: 4
//OP:  a   b   c   d

#include<stdio.h>

void Display(int iNo)   //N
{
    int iCnt = 0;
    char Ch = 'a';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++, Ch++)
    {
        printf("%c\t",Ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}