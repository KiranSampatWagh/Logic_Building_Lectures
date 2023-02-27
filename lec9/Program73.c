//Standard file 

#include<stdio.h>
#include<stdlib.h>

int  ----(int Arr[] , int iSize)
{
    //Logic
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
    iRet = -----(ptr , iLength);
    printf("Even count is : %d\n",iRet);
    
    //Step5: Deallocation of memory.
    free(ptr);
     
    return 0;
}