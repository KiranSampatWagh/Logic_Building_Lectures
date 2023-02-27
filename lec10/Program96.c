//IP: 4
//OP:  A   B   C   D

#include<stdio.h>

void Display(int iNo) 
{
    int iCnt = 0;
    char Ch = 'A';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",Ch);
        Ch++;
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