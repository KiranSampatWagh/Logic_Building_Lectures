    ////////////////////////////////////////////////
    // steps to follow while programming statement
    ////////////////////////////////////////////////

    //1  undrestand the problem statements
    //2  write the algorithm
    //3  Decide the problem statement
    //4  Write the program 
    //5  Test the program

    ////////////////////////////////////////////////////////////////////////////////////////////
    //  problem statement : Accept number form user and check whether itis divisible by five 
    //
    //  Input : 23
    //  Output : 23 is not divisible by 5
    //
    /////////////////////////////////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////
    //  Algorithm
    //////////////////////////////////////////////////////////////

    /*
        Start:
        Accept number from user as no 
        Divide that NO by 5 and  check the value of remender
        If the value is 0
                Then display as NO is divisible by 5
        Otherwise
                Display as NO is not divisible by 5
        END
    */

#include<stdio.h>
#include<stdbool.h>

    ///////////////////////////////////////////////////////
    //
    //  Function name: DivisibleByFive
    //  Description:   To check whether input is divisible by 5 or not
    //  Input:         Integer
    //  Output:        Integer
    //  Author:        Kiran Sampat Wagh 
    //  Dete:          16/10/2022
    //
    ///////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns =0;
    iAns = iNo % 5;

    if(iAns != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

    ////////////////////////////////////////////////////////////
    //  Entry point of the application
    ////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet =DivisibleByFive(iValue);
    if(iRet != 0)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Result:
//
//  Input : 23
//  Output : 23 is not divisible by 5
//
/////////////////////////////////////////////////////////////////////////////////////////