//using toCharArray method and find the captil letter count in string.

import java.util.*;

class MarvellousX
{
    public int CaptilCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int i =0; i < Arr.length; i++)
        {
            if((Arr[i]>='A')&&(Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }   
        return iCnt;
    }
}

class Program276
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string: ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        
        int iRet = obj.CaptilCount(str);
        System.out.println("number of captil latter is:"+iRet);
    }
}