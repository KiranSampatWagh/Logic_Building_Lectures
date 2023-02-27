#include<stdio.h>


int Summation()
{
    int iSum =0;

    iSum =iSum + 1;
    iSum =iSum + 2;
    iSum =iSum + 3;
    iSum =iSum + 4;
    iSum =iSum + 5;
    
    return iSum;
}    

int main()
{
    int iAns =0;
    iAns =Summation();
    printf("Value of Summation is %d\n",iAns);
    return 0;
}