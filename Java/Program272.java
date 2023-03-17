
import java.util.*;
class Program272
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter Sting");
            String str = sobj.nextLine();

            MarvellousX obj = new MarvellousX();
           int iRet = obj.CapitalCase(str);

           System.out.println("Numbers of capital letter is "+iRet);

          
      }
}
class MarvellousX
{
      public int CapitalCase(String s)
      {
            int iCnt = 0;

            for(int i = 0;i < s.length();i++)
           {
              if((s.charAt(i) >=  'A')&&(s.charAt(i) <= 'Z'))
              {
                  iCnt++;
              }
           }
           return iCnt;
      }
}