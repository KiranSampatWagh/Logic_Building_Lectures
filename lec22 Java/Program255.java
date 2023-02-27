// Accept one numbers from user and return Multiplaction of factors.

import java.util.*;

class Numbers
{
    public int FactorsMultiplaction(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
}

class Program255
{
    public static void main(String arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        iRet = nobj.FactorsMultiplaction(iNo);

        System.out.println("Multiplaction of factors of "+iNo +" is: "+iRet);

    }
}