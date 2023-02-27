// Accept N numbers also accept one another number form user and return index at which no that occers in last 

#include<stdio.h>
#include<stdlib.h>

int ChkLastOccIndex(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    } 
    return iCnt;
}

int main()
{
    int *ptr =NULL;
    int iLength = 0;
    int iValue = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter the no to find out last occerence: \n");
    scanf("%d",&iValue);
    
    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = ChkLastOccIndex(ptr , iLength , iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
        printf("There is %d is occered in the array at last index :%d\n",iValue,iRet);
    }
    
    free(ptr);
     
    return 0;
}