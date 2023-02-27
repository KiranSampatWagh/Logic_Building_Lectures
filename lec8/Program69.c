// Accept N numbers and perform addition on that numbers.

#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

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

    return 0;
}