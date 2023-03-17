
import java.util.*;

class Program256
{
     
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            int iNo = 0;

            System.out.println("Enter the  Number :");
            iNo = sobj.nextInt();

            Digit dobj = new Digit();

            boolean bRet = dobj.CheckArmstrong(iNo);

            if(bRet == true)
            {
                  System.out.println(iNo+" is Amstrong Number");
            }
            else
            {
                  System.out.println(iNo+" is not Amstrong Number");
            }

          
      }
}

class  Digit
{
      private int CountDigit(int iNo)
      {
            int iCnt = 0;

            while(iNo !=0)
            {
                  iCnt++;

                  iNo = iNo /10;
            }
            return iCnt;
      }

      private int Power(int Base ,int index)
      {
            int iAns = 1;

            for(int icnt = 1;icnt<= index; icnt++)
            {
                  iAns = iAns * Base;
            }
            return iAns;
      }
      public boolean CheckArmstrong(int iNo)
      {
            int itemp = iNo;
            int iSum = 0;
            int iDigit = 0;
            int iRet = 0;

            int iCount = CountDigit(iNo);

            while(iNo !=0)
            {
                  iDigit = iNo % 10;
                  iRet = Power(iDigit ,iCount);
                  iSum = iSum + iRet;

                  iNo = iNo / 10;
            }

            if(iSum == itemp)
            {
                  return true;
            }
            else
            {
                  return false;
            }

      }
}