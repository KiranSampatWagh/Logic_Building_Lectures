//Accept N numbers form user and find out the largest number in it.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of element\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr , iLength);

    printf("Maximum number is :%d\n",iRet);

    free(ptr);

    return 0;
}