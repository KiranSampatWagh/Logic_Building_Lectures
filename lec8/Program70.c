// Accept N numbers and perform addition on that numbers.

#include<stdio.h>

int Summation(int Data[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for( iCnt = 0; iCnt < iSize; iCnt++ )
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the element:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    

    printf("Element form Array are:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    
    iRet = Summation(Arr,5);

    printf("Summetion of all element:%d\n",iRet);
    
    return 0;
}