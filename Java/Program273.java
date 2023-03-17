
import java.util.*;
class Program273
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter Sting");
            String str = sobj.nextLine();

            MarvellousX obj = new MarvellousX();
           int iRet = obj.DigitCount(str);

           System.out.println("Numbers of Digit "+iRet);

          
      }
}
class MarvellousX
{
      public int DigitCount(String s)
      {
            int iCnt = 0;

            for(int i = 0;i < s.length();i++)
           {
              if((s.charAt(i) >=  '0')&&(s.charAt(i) <= '9'))
              {
                  iCnt++;
              }
           }
           return iCnt;
      }
}