
import java.util.*;
class Program275
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter Sting");
            String str = sobj.nextLine();

            MarvellousX obj = new MarvellousX();
           int iRet = obj.CapitalCase(str);

           System.out.println("Numbers of Capital letter is "+iRet);

          
      }
}
class MarvellousX
{
      public int CapitalCase(String s)
      {
            int iCnt = 0;
            char Arr[] = s.toCharArray();

            for(int i = 0;i < Arr.length;i++)
           {
              if((Arr[i] >=  'A')&&(Arr[i] <= 'Z'))
              {
                  iCnt++;
              }
           }
           return iCnt;
      }
}