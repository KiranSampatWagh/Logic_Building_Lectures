//Array is pallendrom or not

import java.util.*;

class ArrayX
{
    protected int Arr[];
    
    public ArrayX(int iSize)
    {
        Arr =new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter "+Arr.length+" elements");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Element of array are: ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public boolean ChkPallendrom()
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        boolean bFlag = true;
        while(iStart < iEnd)
        {
            if(Arr[iStart]!= Arr[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}


class Program266
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array you want to creat ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        
        boolean bRet = obj.ChkPallendrom();
        if(bRet == true)
        {
            System.out.println("Array is pallendrom");
        }
        else
        {
            System.out.println("Array is not Pallendrom");
        }
        
    }
}