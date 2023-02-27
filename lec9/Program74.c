// Accept N numbers and count even numbers in that element.

#include<stdio.h>
#include<stdlib.h>

int  EvenCount(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr =NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    //Step1:Accept size of array.
    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    //Step2:Memory allocation for Array.
    ptr = (int *)malloc(iLength * sizeof(int));

    //Step3: Accept element of Array.
    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step4: Call the function
    iRet = EvenCount(ptr , iLength);
    printf("Even count is : %d\n",iRet);
    
    //Step5: Deallocation of memory.
    free(ptr);
     
    return 0;
}