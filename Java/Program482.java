import java.util.*;

class Program482
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the String");
            String str = sobj.nextLine();

            String data = str.replaceAll("\\s+"," ");
            String newstr = str.trim(); // 

            String Arr[] = newstr.split(" ");
            System.out.println("Numbers of words are :"+Arr.length);
      }
}