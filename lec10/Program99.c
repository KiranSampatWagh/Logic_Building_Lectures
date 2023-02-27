//Row 4
//Columns 4

/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>

void Display(int iRow , int iCol)   //N^2
{
    int i = 0;
    int j = 0;

    for(i = 0; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of row\n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}