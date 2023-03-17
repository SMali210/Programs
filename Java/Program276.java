
import java.util.*;
class Program276
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter Sting");
            String str = sobj.nextLine();

            MarvellousX obj = new MarvellousX();
            obj.CapitalCase(str);

           System.out.println("Numbers of Capital letter is "+str);

          
      }
}
class MarvellousX
{
      public void CapitalCase(String s)
      {
            int iCnt = 0;
           // char Arr[] = s.toCharArray();

            for(int i = 0;i < s.length();i++)
           {
              if((s.charAt(i) >=  'A')&&(s.charAt(i) <= 'Z'))
              {
                  s.toUpperCase(s.charAt());

              }
           }
           
      }
}