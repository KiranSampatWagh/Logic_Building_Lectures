// Accept N numbers also accept one another number and return frequency of another number.

#include<stdio.h>
#include<stdlib.h>

int  CalculateFrequency(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0;
    int iFreqCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           iFreqCnt++;
        }
    } 
    return iFreqCnt;
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
    
    //Accept one another number.
    printf("Enter the no to find out frequency: \n");
    scanf("%d",&iValue);
    
    //Step3: Accept element of Array.
    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step4: Call the function
    iRet = CalculateFrequency(ptr , iLength , iValue);

    printf("Frequency of %d is %d\n",iValue,iRet);
    
    //Step5: Deallocation of memory.
    free(ptr);
     
    return 0;
}