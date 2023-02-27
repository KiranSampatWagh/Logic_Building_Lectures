// Accept N numbers also accept one another number and check whether the another number are present in array or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  ChkNumber(int Arr[] , int iSize , int iNo)
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
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr =NULL;
    int iLength = 0;
    int iValue = 0;
    int i = 0;
    bool bRet = false;

    //Step1:Accept size of array.
    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    //Step2:Memory allocation for Array.
    ptr = (int *)malloc(iLength * sizeof(int));
    
    //Accept one another number.
    printf("Enter the no to find out occerence: \n");
    scanf("%d",&iValue);
    
    //Step3: Accept element of Array.
    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step4: Call the function
    bRet = ChkNumber(ptr , iLength , iValue);

    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is dose not present\n");
    }
    
    //Step5: Deallocation of memory.
    free(ptr);
     
    return 0;
}