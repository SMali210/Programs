
import java.util.*;

class Program257
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
    
      public boolean CheckArmstrong(int iNo)
      {
           int iDigitCount =0;
           int itemp = iNo;
           int iDigit = 0;
           int icnt = 0;
           int iPower = 1;
            int iSum = 0;

            while(itemp !=0)
            {
                  iDigitCount++;
                  itemp = itemp / 10;

            }

            itemp = iNo;

            while(itemp !=0)
            {
                  iDigit = itemp % 10;

                  for(icnt = 1;icnt <= iDigitCount;icnt++)
                  {
                        iPower = iPower * iDigit;
                  }

                  iSum = iSum + iPower;
                  iPower = 1;   // ***

                  itemp = itemp / 10;      
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