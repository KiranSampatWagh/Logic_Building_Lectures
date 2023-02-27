//Accept N numbers form user and Display numbers in reverse order.

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[] , int iSize)
{
    int iCnt = 0;
    
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
       printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    printf("Enter number of element\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Element in reverse order:\n");
    
    DisplayReverse(ptr , iLength);

    free(ptr);

    return 0;
}