#include<stdio.h>

typedef unsigned int UINT;

//0000   0000    0000    0000    0000    0000    0000    0000       
//0000   0000    0000    0000    0000    0000    0111    0000    

//0X00000070

UINT TogalBit(UINT No)
{
    UINT iMask = 0X00000070;
    UINT iAns = 0;

    iAns = No ^ iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&Value);

    iRet = TogalBit(Value);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}