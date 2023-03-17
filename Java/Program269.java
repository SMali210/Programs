
import java.util.*;
class Program269
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese enter your Full Name");
            String str = sobj.nextLine();

           for(int i = 0;i < str.length();i++)
           {
             System.out.print(str.charAt(i));
           }
      }
}