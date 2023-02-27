#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No, UINT Start, UINT End)
{
    UINT iMask1 =0Xffffffff;
    UINT iMask2 =0Xffffffff;
    UINT iMask =0;
    UINT Result = 0;

    iMask1 = iMask1 << (Start - 1);
    iMask2 = iMask2 >> (32 - End);

    iMask = iMask1 & iMask2;

    Result = No ^ iMask;

    return Result;
}

int main()
{
    UINT Value = 0 ;
    UINT i = 0, j = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&Value);

    printf("Enter starting bit position: \n");
    scanf("%d", &i);

    printf("Enter end bit position: \n");
    scanf("%d", &j);

    iRet = ToggleBit(Value, i, j);

    printf("Updated number is :%d\n",iRet);
    
    return 0;
}

/*
        0000    0000    0000    0000    0000    0000    0000    0000

start = 7
end = 17

Input   0010    1010    1010    1110    1101    1010    0110    1101
Output  0010    1010    1010    1111    0010    0101    1010    1101

Mask    0000    0000    0000    0001    1111    1111    1100    0000

Mask1   1111    1111    1111    1111    1111    1111    1111    1111        
Mask2   1111    1111    1111    1111    1111    1111    1111    1111        

Mask1 = Mask1 << (start - 1)
Mask1 = Mask1 << 6
        1111    1111    1111    1111    1111    1111    1100    0000

Mask2 = Mask2 >> (32 - end)
Mask2 = Mask2 >> 15
        0000    0000    0000    0001    1111    1111    1111    1111        

Mask = Mask1 & Mask2

Mask1   1111    1111    1111    1111    1111    1111    1100    0000
Mask2   0000    0000    0000    0001    1111    1111    1111    1111    &       
---------------------------------------------------------------------------
Mask    0000    0000    0000    0001    1111    1111    1100    0000

Result = No ^ Mask 

No      0010    1010    1010    1110    1101    1010    0110    1101
Mask    0000    0000    0000    0001    1111    1111    1100    0000    ^
----------------------------------------------------------------------------
Result  0010    1010    1010    1111    0010    0101    1010    1101
        
*/