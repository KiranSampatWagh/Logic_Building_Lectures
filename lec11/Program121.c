/*
row = 4
col = 4
 
*
*   *
*   *   *
*   *   *   *

*/
#include<stdio.h>

void Display(int iRow , int iCol)   //N^2
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        return;
    }

    for(i =1;i <=iRow; i++)
    {
        for(j =1; j <=iCol; j++)
        {
            if(i >= j)
            {
                printf("*\t");
            }
           
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter no of row\n");
    scanf("%d",&iValue1);

    printf("Enter no of column\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);
    
    return 0;
}
