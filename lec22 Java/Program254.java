// Accept two numbers and display Commen factors.

import java.util.*;

class Numbers
{
    public void CommenFactorsDisplay(int iNo1, int iNo2)
    {
        int iCnt = 0;

        System.out.println("Commen Factors is :");
        for(iCnt = 1; (iCnt <= iNo1/2)&&(iCnt <= iNo2/2); iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
        
    }
}

class Program254
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommenFactorsDisplay(iNo1, iNo2);
    }
}