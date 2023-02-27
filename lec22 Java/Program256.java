// Accept one numbers from user and check whether Armstrong number or not.

import java.util.*;

class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    private int Power(int Base, int index)
    {
        int iCnt = 0, iAns = 1;

        for(iCnt = 1; iCnt <= index; iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }

    public boolean ChkArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;
        int iRet = 0;

        int iCount = CountDigits(iNo);

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;

            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program256
{
    public static void main(String arg[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();

        bRet = nobj.ChkArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+" is a Armstrong number.");
        }
        else
        {
            System.out.println(iNo+" is not a Armstrong number.");
        }
    }
}