//using charAt method and find the captil letter count in string.

import java.util.*;

class MarvellousX
{
    public int CaptilCount(String s)
    {
        int iCnt = 0;

        for(int i =0; i < s.length(); i++)
        {
            if((s.charAt(i)>='A')&&(s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }   
        return iCnt;
    }
}

class Program272
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