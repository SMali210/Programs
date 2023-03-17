import java.util.*;

class Program278
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The string");
            String str = sobj.nextLine();

            MarvellousX obj =  new MarvellousX();
            obj.DisplayReverse(str);

            
      }
}

class MarvellousX
{
      public void DisplayReverse(String s)
      {
            for(int i = 0;i < s.length();i++)
            {
                  System.out.print(s.charAt(i)+"\t");
            }
      }
}