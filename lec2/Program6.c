#include<stdio.h>

int main()
{
    int iNo1 =0, iNo2 =0;
    int iMult =0;

    printf("Enter first no :\n");
    scanf("%d",&iNo1);

    printf("Enter second no:\n");
    scanf("%d",&iNo2);

    printf("First no is:%d\n",iNo1);
    printf("Second no is:%d\n",iNo2);

    iMult = iNo1 * iNo2;
    printf("Multiplaction is :%d\n",iMult);
    
    return 0;
}