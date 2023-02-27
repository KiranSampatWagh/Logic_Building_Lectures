//using charAt method and find the small letter count in string.

import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCnt = 0;

        for(int i =0; i < s.length(); i++)
        {
            if((s.charAt(i)>='a')&&(s.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }   
        return iCnt;
    }
}

class Program271
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string: ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCount(str);
        System.out.println("number of small latter is:"+iRet);
    }
}