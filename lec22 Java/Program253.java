//Accept one number form user and Display even factors. 25%N    O(N/4)

import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {
        int iCnt = 0;
        for(iCnt =2; iCnt <= (iNo/2); iCnt = (iCnt+2))
        {
            if(iNo % iCnt == 0)
            {    
                System.out.println("Even factor is: "+iCnt);
            }
        }
    }
}

class Program253
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo);
    }
}