// Accept N numbers also accept one another number form user and return index at which no that occers in first 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int  ChkNumberIndex(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    } 
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr =NULL;
    int iLength = 0;
    int iValue = 0;
    int i = 0;
    int iRet = 0;

    //Step1:Accept size of array.
    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    //Step2:Memory allocation for Array.
    ptr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter the no to find out occerence: \n");
    scanf("%d",&iValue);
    
    //Step3: Accept element of Array.
    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step4: Call the function
    iRet = ChkNumberIndex(ptr , iLength , iValue);

    if(iRet == -1)
    {
        printf("there is no %d in the array\n",iValue);
    }
    else
    {
        printf("there is no %d in the array at index :%d\n",iValue,iRet);
    }
    
    //Step5: Deallocation of memory.
    free(ptr);
     
    return 0;
}