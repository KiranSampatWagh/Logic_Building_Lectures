// Accept one numbers from user and check whether Armstrong number or not.

import java.util.*;

class Digits
{
    public boolean ChkArmstrong(int iNo)
    {
        int iDigitCount = 0;
        int iTemp = iNo;
        int iDigit = 0;
        int iCnt = 0;
        int iPower = 1;
        int iSum = 0;

        while(iTemp != 0)
        {
            iDigitCount++;
            iTemp = iTemp / 10;
        }   

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            for(iCnt = 1; iCnt <= iDigitCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            
            iPower = 1;

            iTemp = iTemp / 10;
        }
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program257
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