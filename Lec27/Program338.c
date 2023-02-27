#include<stdio.h>

typedef unsigned int UINT;

//0000   0000    0000    0000    0000    0000    0000    0000       
//1111   1111    1111    1111    1111    1111    1111    0111    
//  F       F       F       F       F       F       F       7   
//FFFFFFF7
//0XFFFFFFF7

UINT OFFBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
 
    return (No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&Value);

    iRet = OFFBit(Value);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}