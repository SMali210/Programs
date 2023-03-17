
import java.util.*;
class Program271
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter Sting");
            String str = sobj.nextLine();

            MarvellousX obj = new MarvellousX();
           int iRet = obj.SmallCase(str);

           System.out.println("Numbers of small letter is "+iRet);

          
      }
}
class MarvellousX
{
      public int SmallCase(String s)
      {
            int iCnt = 0;

            for(int i = 0;i < s.length();i++)
           {
              if((s.charAt(i) >=  'a')&&(s.charAt(i) <= 'z'))
              {
                  iCnt++;
              }
           }
           return iCnt;
      }
}