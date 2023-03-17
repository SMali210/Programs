import  java.util.*;

class Program292
{
      public static void main(String arg[])   //
      {
            Pattern pobj = new Pattern();
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter String:");
            String s = sobj.nextLine();


            pobj.Display(s);
      }
}
class Pattern
{
      public void Display(String str)
      {

         int i = 0,j = 0;

         for(i=0;i<str.length();i++)
         {
            for(j=0;j<str.length();j++)
            {
                  System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
         }
      }
}
